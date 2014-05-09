

void pp(int x, int y, int intensity, int c) {
    unsigned int pix_offset = x + y * finfo.line_length;
    int r = ((c & 0xFF) << 16) / (double) 255 * intensity;
	int g = ((c & 0xFF) << 8) / (double) 255 * intensity;
   	int b = (c & 0xFF) / (double) 255 * intensity;
    *((char*)(fbp + pix_offset)) = ((r&0x0ff)<<16)|((g&0x0ff)<<8)|(b&0x0ff);
}