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
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

// 'global' variables to store screen info
char *fbp = 0;
struct fb_var_screeninfo vinfo;
struct fb_fix_screeninfo finfo;

#include "drawing.h"
#include "fl.h"

#define BUF_SIZE 100
wchar_t wcsbuf[BUF_SIZE];

void put_pixel(int x, int y, int c) {
    unsigned int pix_offset = x + y * finfo.line_length;
    *((char*)(fbp + pix_offset)) = c;
}

int rgb(int r, int g, int b) {
    return ((r & 0x0ff) << 16) | ((g & 0x0ff)<<8) | (b & 0x0ff);
}

void draw() {
    int fps = 1;
    int secs = 60;
    
    // loop for a while
    int i;
    for (i = 0; i < (fps * secs); i++) {
        clear_screen(rgb(0,0,0));

        fl_print(L"Nick", 10, 10, rgb(255, 255, 255), 400); 
        fl_print(L"Batra", 10, 55, rgb(255, 255, 255), 400); 
        fl_print(L"$23.55", 10, 110, rgb(0, 255, 0), 400); 

        usleep(1000000 / fps);
        // to be exact, would need to time the above and subtract...
    }
}

// application entry point
int main(int argc, char* argv[])
{
    
    int fbfd = 0;
    struct fb_var_screeninfo orig_vinfo;
    long int screensize = 0;
    
    
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

    fbp = (char*)mmap(0,
                      screensize,
                      PROT_READ | PROT_WRITE,
                      MAP_SHARED,
                      fbfd,
                      0);
    
    if ((int)fbp == -1) {
        wprintf(L"Failed to mmap.\n");
    }
    else {
        int sock,bytes_recv,sin_size;
        struct sockaddr_in server_addr;
        struct hostent *host;
        char send_data[1024],recv_data[1024];

        host= (struct hostent *) gethostbyname((char *)"192.168.105.81");

        if ((sock = socket(AF_INET, SOCK_DGRAM, 0)) == -1)
        {
            wprintf(L"Socket error");
            exit(1);
        }

        server_addr.sin_family = AF_INET;
        server_addr.sin_port = htons(8088);
        server_addr.sin_addr = *((struct in_addr *)host->h_addr);
        bzero(&(server_addr.sin_zero),8);
        sin_size = sizeof(struct sockaddr);

        while (1)
           {

            wprintf(L"Type Something (q or Q to quit):");
            gets(send_data);

            if ((strcmp(send_data , "q") == 0) || strcmp(send_data , "Q") == 0)
               break;

            else
               sendto(sock, send_data, strlen(send_data), 0,
                      (struct sockaddr *)&server_addr, sizeof(struct sockaddr));

                 bytes_recv = recvfrom(sock,recv_data,1024,0,(struct sockaddr *)&server_addr,&sin_size);
                  recv_data[bytes_recv]= '\0';
             wprintf(L"Received :%s\n",recv_data);
        }

        // draw...
//        draw();
    }
    
    // cleanup
    munmap(fbp, screensize);
    if (ioctl(fbfd, FBIOPUT_VSCREENINFO, &orig_vinfo)) {
        wprintf(L"Error re-setting variable information.\n");
    }
    close(fbfd);
    
    return 0;
    
}
