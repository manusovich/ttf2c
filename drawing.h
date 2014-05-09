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

void pp(int x, int y, int intensity, int c) {
    unsigned int pix_offset = x + y * finfo.line_length;
    int r = 255; //((c >> 16) & 0x0FF);
	int g = 0; //((c >> 8) & 0x0FF);
   	int b = 0; //(c & 0x0FF);

	put_pixel_RGB565(x,y,r,g,b);
}

