

void pp(int x, int y, int intensity, int c) {
    unsigned int pix_offset = x + y * finfo.line_length;
    int r = 255; //((c >> 16) & 0x0FF);
	int g = 0; //((c >> 8) & 0x0FF);
   	int b = 0; //(c & 0x0FF);

   	*((char*)(fbp + pix_offset)) = r;
    *((char*)(fbp + pix_offset + 1)) = g;
    *((char*)(fbp + pix_offset + 2)) = b;
}