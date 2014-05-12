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
#include "fl.h"
#include "fs.h"

#define PORT "8088" // the port client will be connecting to 
#define MAXDATASIZE 100 // max number of bytes we can get at once 
#define BUF_SIZE 100
wchar_t wcsbuf[BUF_SIZE];

char *fbp = 0;
struct fb_var_screeninfo vinfo;
struct fb_fix_screeninfo finfo;

void put_pixel(int x, int y, int c) {
    unsigned int pix_offset = x + y * finfo.line_length;
    *((char*)(fbp + pix_offset)) = c;
}

int rgb(int r, int g, int b) {
    return ((r & 0x0ff) << 16) | ((g & 0x0ff)<<8) | (b & 0x0ff);
}

// helper function to clear the screen - fill whole 
// screen with given color
void clear_screen(int c) {
    memset(fbp, c, vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8);
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
    *((unsigned short*)(fbp + pix_offset)) = c;
}

void put_pixel_RGB24(int x, int y, int r, int g, int b)
{
    // calculate the pixel's byte offset inside the buffer
    // note: x * 3 as every pixel is 3 consecutive bytes
    unsigned int pix_offset = x * 3 + y * finfo.line_length;

    // now this is about the same as 'fbp[pix_offset] = value'
    *((char*)(fbp + pix_offset)) = r;
    *((char*)(fbp + pix_offset + 1)) = g;
    *((char*)(fbp + pix_offset + 2)) = b;
}

void pp(int x, int y, int intensity, int c) {
    unsigned int pix_offset = x + y * finfo.line_length;
    int r = ((c >> 16) & 0x0FF) / (double) 0xff * intensity;
    int g = ((c >> 8) & 0x0FF) / (double) 0xff * intensity;
    int b = (c & 0x0FF) / (double) 0xff * intensity;

    if (vinfo.bits_per_pixel == 16) {
        put_pixel_RGB565(x, y, r, g, b);
    } else {
        put_pixel_RGB24(x, y, r, g, b);
    }
}

void *get_in_addr(struct sockaddr *sa) {
    if (sa->sa_family == AF_INET) {
        return &(((struct sockaddr_in*)sa)->sin_addr);
    }
    return &(((struct sockaddr_in6*)sa)->sin6_addr);
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
        int sockfd, numbytes;  
        char buf[MAXDATASIZE];
        struct addrinfo hints, *servinfo, *p;
        int rv;
        char s[INET6_ADDRSTRLEN];

        memset(&hints, 0, sizeof hints);
        hints.ai_family = AF_UNSPEC;
        hints.ai_socktype = SOCK_STREAM;

        if ((rv = getaddrinfo("192.168.105.81", PORT, &hints, &servinfo)) != 0) {
            wprintf(L"getaddrinfo: %s\n", gai_strerror(rv));
            return 1;
        }

        // loop through all the results and connect to the first we can
        for(p = servinfo; p != NULL; p = p->ai_next) {
            if ((sockfd = socket(p->ai_family, p->ai_socktype,
                    p->ai_protocol)) == -1) {
                wprintf(L"client: socket");
                continue;
            }

            if (connect(sockfd, p->ai_addr, p->ai_addrlen) == -1) {
                close(sockfd);
                wprintf(L"client: connect");
                continue;
            }

            break;
        }

        if (p == NULL) {
            wprintf(L"client: failed to connect\n");
            return 2;
        }

        inet_ntop(p->ai_family, get_in_addr((struct sockaddr *)p->ai_addr),
                s, sizeof s);
        wprintf(L"client: connecting to %s\n", s);

        freeaddrinfo(servinfo); // all done with this structure

        clear_screen(rgb(0,0,0));

        while (1) {
            if ((numbytes = recv(sockfd, buf, MAXDATASIZE-1, 0)) == -1) {
                wprintf(L"recv");
                exit(1);
            }
   
            char *array[10];
            int k = 0;
            array[k] = strtok(buf, "\n");
            while(array[k] != NULL){
                array[++k] = strtok(NULL, "\n");
            }

            int z = 0;
            for (z = 0; z < k; z++) {
                int c = array[z][0];
                wprintf(L"%d\n", c);
            }

            // read section id
            //clear_screen(rgb(0,0,0));
            swprintf(wcsbuf, BUF_SIZE, L"%s", buf + 1);
            
            int code = buf[0];
            wprintf(L"%d %d %d\n", code, numbytes, k);
         // time
            if (code == 10) {
                // fs_print(wcsbuf, 0, 0, rgb(255, 255, 255), 400); 
            }
            // first name
            if (code == 21) {
                // fl_print(wcsbuf, 10, 10, rgb(255, 255, 255), 400); 
            }
            // last name
            if (code == 22) {
                // fl_print(wcsbuf, 10, 55, rgb(255, 255, 255), 400); 
            }
        }
        close(sockfd);
    }
    
    // cleanup
    munmap(fbp, screensize);
    if (ioctl(fbfd, FBIOPUT_VSCREENINFO, &orig_vinfo)) {
        wprintf(L"Error re-setting variable information.\n");
    }
    close(fbfd);
    
    return 0;
    
}
