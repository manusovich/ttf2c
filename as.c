#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <wchar.h> //"Широкие" многобайтовые символы и их ввод-вывод
#include <wctype.h> //"Классификация" широких символов
#include <locale.h> //Во избежание "крокозяблей" на выводе


// 'global' variables to store screen info
char *fbp = 0;
struct fb_var_screeninfo vinfo;
struct fb_fix_screeninfo finfo;

#include "drawing.h"
#include "font.h"



// helper function to 'plot' a pixel in given color
void put_pixel(int x, int y, int c)
{
    // calculate the pixel's byte offset inside the buffer
    unsigned int pix_offset = x + y * finfo.line_length;
    
    // now this is about the same as 'fbp[pix_offset] = value'
    *((char*)(fbp + pix_offset)) = c;
    
}

int rgb(int r, int g, int b) {
    return ((r & 0x0ff) << 16) | ((g & 0x0ff)<<8) | (b & 0x0ff);
}

// helper function for drawing - no more need to go mess with
// the main function when just want to change what to draw...
void draw() {
    clear_screen(rgb(0,0,0));
    font1print(L"QWEQW", 10, 10, rgb(0xff, 0, 0), 400); 
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
        // draw...
        draw();
        sleep(15);
    }
    
    // cleanup
    munmap(fbp, screensize);
    if (ioctl(fbfd, FBIOPUT_VSCREENINFO, &orig_vinfo)) {
        wprintf(L"Error re-setting variable information.\n");
    }
    close(fbfd);
    
    return 0;
    
}
