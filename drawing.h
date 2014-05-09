

void pp(int x, int y, int intensity, int c) {
    unsigned int pix_offset = x + y * finfo.line_length;
    int r = ((c >> 16) & 0x0FF);
	int g = ((c >> 8) & 0x0FF);
   	int b = (c & 0x0FF);
   	*((char*)(fbp + pix_offset)) = ((r&0x0ff)<<16)|((g&0x0ff)<<8)|(b&0x0ff);
}