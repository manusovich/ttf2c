#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <wchar.h> 
#include <wctype.h> 
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/select.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <arpa/inet.h>
#include "fl.h"
#include "fs.h"

#define PORT "55000" // the port client will be connecting tyo 
#define MAXDATASIZE 100 // max number of bytes we can get at once 
#define BUF_SIZE 100
wchar_t wcsbuf[BUF_SIZE];

int fbfd = 0;
struct fb_var_screeninfo orig_vinfo;
long int screensize = 0;

char *fbp = 0;
char *fbp2 = 0;
struct fb_var_screeninfo vinfo;
struct fb_fix_screeninfo finfo;

int debug = 0;

int sockfd, numbytes;  
char buf[MAXDATASIZE];
struct addrinfo hints, *servinfo, *p;
int rv;
char s[INET6_ADDRSTRLEN];
char buf2[MAXDATASIZE];        
int server_reconnects = 0;

fd_set rset, wset;
socklen_t       len;
int nsec = 2;
int  flags, n, error;
struct timeval  tval;

int rgb(int r, int g, int b) {
    return ((r & 0x0ff) << 16) | ((g & 0x0ff)<<8) | (b & 0x0ff);
}

// helper function to clear the screen - fill whole 
// screen with given color
void clear_screen(int c) {
    memset(fbp2, c, vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8);
}

void put_pixel_RGB565(int x, int y, int r, int g, int b)
{

    // calculate the pixel's byte offset inside the buffer
    // note: x * 2 as every pixel is 2 consecutive bytes
    unsigned int pix_offset = x * 2 + y * finfo.line_length;

    // now this is about the same as 'fbp[pix_offset] = value'
    // but a bit more complicated for RGB565
    unsigned short c = ((r / 8) << 11) + ((g / 4) << 5) + (b / 8);
    // or: c = ((r / 8) * 2048) + ((g / 4) * 32) + (b / 8);
    // write 'two bytes at once'
    *((unsigned short*)(fbp2 + pix_offset)) = c;
}

void put_pixel_RGB24(int x, int y, int r, int g, int b)
{
    // calculate the pixel's byte offset inside the buffer
    // note: x * 3 as every pixel is 3 consecutive bytes
    unsigned int pix_offset = x * 3 + y * finfo.line_length;

    // now this is about the same as 'fbp[pix_offset] = value'
    *((char*)(fbp2 + pix_offset)) = r;
    *((char*)(fbp2 + pix_offset + 1)) = g;
    *((char*)(fbp2 + pix_offset + 2)) = b;
}

void pp(int x, int y, int intensity, int c) {
    unsigned int pix_offset = x + y * finfo.line_length;
    int r = ((c >> 16) & 0x0FF) / (double) 0xff * intensity;
    int g = ((c >> 8) & 0x0FF) / (double) 0xff * intensity;
    int b = (c & 0x0FF) / (double) 0xff * intensity;
    if (intensity > 100) {
        if (vinfo.bits_per_pixel == 16) {
            put_pixel_RGB565(x, y, r, g, b);
        } else {
            put_pixel_RGB24(x, y, r, g, b);
        }
    }
}

void *get_in_addr(struct sockaddr *sa) {
    if (sa->sa_family == AF_INET) {
        return &(((struct sockaddr_in*)sa)->sin_addr);
    }
    return &(((struct sockaddr_in6*)sa)->sin6_addr);
}

void clear_area(int x1, int y1, int x2, int y2) {
    int x = 0, y = 0;
    for (x = x1; x < x2; x++) {
        for (y = y1; y < y2; y++) {
            pp(x, y, 0xff, rgb(0,0,0));
        }
    }
}

int recvtimeout(int s, char *buf, int len, int timeout)
{
    fd_set fds;
    int n;
    struct timeval tv;

    // set up the file descriptor set
    FD_ZERO(&fds);
    FD_SET(s, &fds);

    // set up the struct timeval for the timeout
    tv.tv_sec = timeout;
    tv.tv_usec = 0;

    // wait until timeout or data received
    n = select(s+1, &fds, NULL, NULL, &tv);
    if (n == 0) return -2; // timeout!
    if (n == -1) return -1; // error

    // data must be here, so do a normal recv()
    return recv(s, buf, len, 0);
}

void print_error(char *text) {
    if (debug == 0) {
        int x1, y1;
        for (x1 = 0; x1 < 320; x1++) {
            for (y1 = 0; y1 < 60; y1 ++) {
                pp(x1, y1, 200, rgb(0xff, 0, 0));
            }
        }
        swprintf(wcsbuf, BUF_SIZE, L"%s", text);
        fs_print(wcsbuf, 20, 30, rgb(10, 10, 10), 400);       
    } else if (debug == 1) {
        wprintf(L"Error: %s\n", text);
    }
}

int draw_ipaddresses(const int domain, int x, int y)
{
  int s;
  struct ifconf ifconf;
  struct ifreq ifr[50];
  int ifs;
  int i;

  s = socket(domain, SOCK_STREAM, 0);
  if (s < 0) {
    wprintf("socket");
    return 0;
  }

  ifconf.ifc_buf = (char *) ifr;
  ifconf.ifc_len = sizeof ifr;

  if (ioctl(s, SIOCGIFCONF, &ifconf) == -1) {
    wprintf("ioctl");
    return 0;
  }

  ifs = ifconf.ifc_len / sizeof(ifr[0]);
  wprintf("interfaces = %d:\n", ifs);
  for (i = 0; i < ifs; i++) {
    char ip[INET_ADDRSTRLEN];
    struct sockaddr_in *s_in = (struct sockaddr_in *) &ifr[i].ifr_addr;

    if (!inet_ntop(domain, &s_in->sin_addr, ip, sizeof(ip))) {
      wprintf(L"inet_ntop");
      return 0;
    }

    swprintf(wcsbuf, BUF_SIZE, L"%s", ip);
    fs_print(wcsbuf, x, y, rgb(100, 100, 100), 400); 
    
    swprintf(wcsbuf, BUF_SIZE, L"%s", ifr[i].ifr_name);
    fs_print(wcsbuf, x, y + 30, rgb(100, 100, 100), 400); 
  }

  close(s);

  return 1;
}

int mz_setup_server_connection() {
    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;

    wprintf(L"Resolve address ...\n");
    if ((rv = getaddrinfo("54.200.79.254", PORT, &hints, &servinfo)) != 0) {
        wprintf(L"getaddrinfo: %s\n", gai_strerror(rv));
        return 1;
    }

    wprintf(L"Open socket\n");
    
    // loop through all the results and connect to the first we can
    for (p = servinfo; p != NULL; p = p->ai_next) {
        wprintf(L"------------- 1\n");
        if ((sockfd = socket(p->ai_family, p->ai_socktype, p->ai_protocol)) == -1) {
            wprintf(L"Can't open socket\n");
            continue;
        }
        wprintf(L"------------- 2\n");
        
        flags = fcntl(sockfd, F_GETFL, 0);
        fcntl(sockfd, F_SETFL, flags | O_NONBLOCK);

        wprintf(L"------------- 3\n");
        error = 0;
        if ((n = connect(sockfd, p->ai_addr, p->ai_addrlen)) < 0) {
            if (errno != EINPROGRESS) {
                close(sockfd);
                wprintf(L"Connection issue: %d\n", errno);
                continue;
            }
        }

        wprintf(L"------------- 4\n");

        break;
    }

    if (n == 0)
        goto done;  /* connect completed immediately */

    wprintf(L"------------- 5\n");

    FD_ZERO(&rset);
    FD_SET(sockfd, &rset);
    wset = rset;
    tval.tv_sec = nsec;
    tval.tv_usec = 0;

    wprintf(L"------------- 6\n");

    if ( (n = select(sockfd+1, &rset, &wset, NULL,
                 nsec ? &tval : NULL)) == 0) {
        close(sockfd);      /* timeout */
        errno = ETIMEDOUT;
        return(-1);
    }

    wprintf(L"------------- 7\n");


    if (FD_ISSET(sockfd, &rset) || FD_ISSET(sockfd, &wset)) {
        len = sizeof(error);
        if (getsockopt(sockfd, SOL_SOCKET, SO_ERROR, &error, &len) < 0) {
            return (-1);         /* Solaris pending error */
        }
    } else {
        wprintf(L"select error: sockfd not set");
    }

    // wprintf(L"------------- 8\n");

    done:
        fcntl(sockfd, F_SETFL, flags);  /* restore file status flags */

        if (error) {
            close(sockfd);      /* just in case */
            errno = error;
            return (-1);
         }

    // wprintf(L"------------- 9\n");

    inet_ntop(p->ai_family, get_in_addr((struct sockaddr *)p->ai_addr),
            s, sizeof s);
    wprintf(L"client: connecting to %s\n", s);

    // wprintf(L"------------- 10\n");


    freeaddrinfo(servinfo); // all done with this structure

    clear_screen(rgb(0,0,0));

    draw_image("/home/pi/ttf2c/mozido-logo", 330, 10);

    int res = mz_loop();

    close(sockfd);

   // wprintf(L"------------- 11\n");

    return res;
}


void draw_image(char *name, int sx, int sy) {
    FILE *file;
    char *buffer;
    int readed, k, y;

    //Open file
    file = fopen(name, "rb");
    if (!file) {
        wprintf(L"Unable to open file %s", name);
        return;
    }
    
    y = sy;
    buffer = (char *) malloc(300 + 1);
    while (1) {
        int readed = fread(buffer, 1, 300, file);
        for (k = 0; k < readed; k+=2) {
            pp(sx + k/2, y, 0xFF, (buffer[k + 1] << 8) | (buffer[k]));
        }
        y++;
        if (readed <= 0) {
            break;
        }
    }
    fclose(file);
    free(buffer);
}


int mz_loop() {
    while (1) {
        clear_area(0, 0, 320, 60);

        // timeout for recv = 5 sec
        if ((numbytes = recvtimeout(sockfd, buf, (sizeof buf - 1), 5)) <= 0) {
            return numbytes;
        }
        
        if (debug == 1) {
            // Display package information        
            buf[numbytes] = '\0';
            wprintf(L"IN(%db): %s\n", numbytes, buf);
        } else if (debug == 0) {
            // Draw graphics
           
            int i = 0, k = 0;
            for (i = 0; i < numbytes; i++) {
                if (buf[i] == '\n' && k > 0) {
                    buf2[k]='\0';
                    k = 0;
                    
                    swprintf(wcsbuf, BUF_SIZE, L"%s", buf2 + 2);

                    if (buf2[0] == '2' && buf2[1] == '0') {
                        clear_area(20, 60, 330, 105);
                        fl_print(wcsbuf, 20, 60, rgb(255, 255, 255), 330); 
                    }

                    if (buf2[0] == '2' && buf2[1] == '1') {
                        clear_area(20, 105, 330, 150);
                        fl_print(wcsbuf, 20, 105, rgb(255, 255, 255), 330); 
                    }

                    if (buf2[0] == '5' && buf2[1] == '0') {
                        clear_area(20, 150, 330, 195);
                        fl_print(wcsbuf, 20, 150, rgb(0, 255, 0), 330); 
                    }

                    if (buf2[0] == '1' && buf2[1] == '0') {
                        clear_area(330, 240, 480, 272);
                        fs_print(wcsbuf, 365, 240, rgb(100, 100, 100), 400); 
                    }
                    
                    if (buf2[0] == '3' && buf2[1] == '0') {
                        clear_area(330, 70, 480, 240);
                        fs_print(L"L", 400, 150, rgb(255, 255, 255), 330); 
                        memcpy ( fbp, fbp2, screensize );

                        int status;
                        system("curl -s http://api-inn2.mozido.com/proximity/ci -o /home/pi/1");  
                        wait(&status); 

                        draw_image("/home/pi/1", 330, 70);
                    }
                } else {
                    buf2[k] = buf[i];
                    k++;
                }
           }
            // display
            memcpy ( fbp, fbp2, screensize );
        }

    }
}



// application entry point
int main(int argc, char* argv[])
{
    wprintf(L"Start transmitting Beacon signal");
    system("hciconfig hciO up");
    wait(&status); 
    system("hciconfig hci0 leadv");
    wait(&status); 
    system("hciconfig hci0 noscan");
    wait(&status); 
    system("hcitool -i hci0 cmd 0x08 0x0008 1E 02 01 1A 1A FF 4C 00 02 15 E2 0A 39 F4 73 F5 4B C4 A1 2F 17 D1 AD 07 A9 61 00 00 00 00 C8 00");
    wait(&status); 



    // Open the file for reading and writing
    fbfd = open("/dev/fb0", O_RDWR);
    if (!fbfd) {
        wprintf(L"Error: cannot open framebuffer device.\n");
        return(1);
    }
    wprintf(L"The framebuffer device was opened successfully.\n");
    
    // Get variable screen information
    if (ioctl(fbfd, FBIOGET_VSCREENINFO, &vinfo)) {
        wprintf(L"Error reading variable information.\n");
    }
    wprintf(L"Original %dx%d, %dbpp\n", vinfo.xres, vinfo.yres,
           vinfo.bits_per_pixel );
    
    // Store for reset (copy vinfo to vinfo_orig)
    memcpy(&orig_vinfo, &vinfo, sizeof(struct fb_var_screeninfo));
    
    // Change variable info - force 24 bit
    vinfo.bits_per_pixel = 24;
    if (ioctl(fbfd, FBIOPUT_VSCREENINFO, &vinfo)) {
        wprintf(L"Error setting variable information.\n");
    }
    
    // Get fixed screen information
    if (ioctl(fbfd, FBIOGET_FSCREENINFO, &finfo)) {
        wprintf(L"Error reading fixed information.\n");
    }
    
    // map fb to user mem
    screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;

    fbp = (char*) mmap(0, screensize, PROT_READ | PROT_WRITE,
            MAP_SHARED, fbfd, 0);
    fbp2 = (char*) malloc(screensize);

    if ((int)fbp == -1) {
        wprintf(L"Failed to mmap.\n");
    } else {
        while (1) {

            //wprintf(L"------------- A\n");

            if (debug == 0) {
                clear_screen(rgb(0,0,0));
                draw_image("/home/pi/ttf2c/mozido-logo", 330, 10);
                fs_print(L"Connecting ...", 20, 30, rgb(255, 255, 255), 330);
                draw_ipaddresses(AF_INET, 20, 200);            

                memcpy ( fbp, fbp2, screensize );
            }
            
            errno = 0;
            int res = mz_setup_server_connection();
            if (res > 0) {
                break;
            }
            server_reconnects++;
            sprintf(buf2, "%d", server_reconnects);
            print_error(buf2);

            //wprintf(L"------------- Z\n");

            sleep(2);
        }
    }

    free(fbp2);
    
    // cleanup
    munmap(fbp, screensize);
    if (ioctl(fbfd, FBIOPUT_VSCREENINFO, &orig_vinfo)) {
        wprintf(L"Error re-setting variable information.\n");
    }
    close(fbfd);
    
    return 0;
}


