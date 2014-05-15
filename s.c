#include   "unp.h"

int main(int argc, char **argv) {
	int					sockfd, n;
	struct sockaddr_in	servaddr;
	char				recvline[MAXLINE + 1];

	if ( (sockfd = socket(PF_INET, SOCK_STREAM, 0)) < 0)
		err_sys("socket error");

	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family      = AF_INET;
	servaddr.sin_addr.s_addr = inet_addr(argv[1]);
	servaddr.sin_port        = htons(atoi(argv[2])); /* daytime server */

	if (connect_nonb(sockfd, (SA *) &servaddr, sizeof(servaddr), atoi(argv[3])) < 0)
		err_sys("connect error");

	for ( ; ; ) {
		if ( (n = read(sockfd, recvline, MAXLINE)) <= 0) {
			if (n == 0)
				break;		/* server closed connection */
			else
				err_sys("read error");
		}
		recvline[n] = 0;	/* null terminate */
		Fputs(recvline, stdout);
	}
	exit(0);
}

int connect_nonb(int sockfd, const SA *saptr, socklen_t salen, int nsec) {
	int				flags, n, error;
	socklen_t		len;
	fd_set			rset, wset;
	struct timeval	tval;

	flags = Fcntl(sockfd, F_GETFL, 0);
	Fcntl(sockfd, F_SETFL, flags | O_NONBLOCK);

	error = 0;
	if ( (n = connect(sockfd, (struct sockaddr *) saptr, salen)) < 0)
		if (errno != EINPROGRESS)
			return(-1);

	/* Do whatever we want while the connect is taking place. */

	if (n == 0)
		goto done;	/* connect completed immediately */

	FD_ZERO(&rset);
	FD_SET(sockfd, &rset);
	wset = rset;
	tval.tv_sec = nsec;
	tval.tv_usec = 0;

	if ( (n = Select(sockfd+1, &rset, &wset, NULL,
					 nsec ? &tval : NULL)) == 0) {
		close(sockfd);		/* timeout */
		errno = ETIMEDOUT;
		return(-1);
	}

	if (FD_ISSET(sockfd, &rset) || FD_ISSET(sockfd, &wset)) {
		len = sizeof(error);
		if (getsockopt(sockfd, SOL_SOCKET, SO_ERROR, &error, &len) < 0)
			return(-1);			/* Solaris pending error */
	} else
		err_quit("select error: sockfd not set");

done:
	Fcntl(sockfd, F_SETFL, flags);	/* restore file status flags */

	if (error) {
		close(sockfd);		/* just in case */
		errno = error;
		return(-1);
	}
	return(0);
}