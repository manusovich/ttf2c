

void pp(int x, int y, int intensity, int c) {
    wprintf("%d", c);
    unsigned int pix_offset = x + y * finfo.line_length;
    int r = ((c & 0xFF) << 16);
	int g = ((c & 0xFF) << 8);
   	int b = (c & 0xFF);
   	wprintf("%d %d %d", r, g, b);
    *((char*)(fbp + pix_offset)) = ((r&0x0ff)<<16)|((g&0x0ff)<<8)|(b&0x0ff);
}