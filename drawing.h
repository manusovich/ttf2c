// helper function to clear the screen - fill whole 
// screen with given color
void clear_screen(int c) {
    memset(fbp, c, vinfo.xres * vinfo.yres);
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
    int r = ((c >> 16) & 0x0FF);
	int g = ((c >> 8) & 0x0FF);
   	int b = (c & 0x0FF);

	if (vinfo.bits_per_pixel == 16) {
    	put_pixel_RGB565(x, y, r, g, b);
    } else {
        put_pixel_RGB24(x, y, r, g, b);
    }
}

