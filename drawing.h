

void pp(int x, int y, int intensity, int c) {
    unsigned int pix_offset = x + y * finfo.line_length;
    int g = c & 0xFF;
    g = g / (double) 255 * intensity;
    *((char*)(fbp + pix_offset)) = ((g&0x0ff)<<16)|((g&0x0ff)<<8)|(g&0x0ff);;
}