typedef int (*font1_ptr_t)( int, int, int );

int font1_symbol_count = 3;
//font1_ptr_t font1_pointers[font1_symbol_count];
int font1_chars[font1_symbol_count];

font1_chars[0] = 0x0051; // Q
//font1_pointers[0] = &print_0051;

//font1_chars[1] = 0x0057; // W
//font1_pointers[1] = &print_0057;

//font1_chars[2] = 0x0045; // E
//font1_pointers[2] = &print_0045;

int font1Print(wchar_t *str, int x, int y, int maxWidth) {
	int len = wcslen ( str );
	if (len > 200) {
		return -1;
	}
	wprintf(L"Len %d\n", len);

	int i = 0, k = 0;
	for (i = 0; i < len; i++) {
		wchar_t c = str[i];
		wprintf(L"%lc (%d) (%d)\n", c, c, 0x0051);
/*
		for (k = 0; k < font1_symbol_count; k++) {
			if (font1_chars[k] == c) {
				wprintf(L"SI: %d\n", k);
			}
		}
	}
*/
}

int print_0051(int x, int y, int c) {
pp(x+2,y+43,143,c);
pp(x+3,y+18,81,c);
pp(x+3,y+19,170,c);
pp(x+3,y+20,212,c);
pp(x+3,y+21,234,c);
pp(x+3,y+22,250,c);
pp(x+3,y+23,252,c);
pp(x+3,y+24,252,c);
pp(x+3,y+25,241,c);
pp(x+3,y+26,214,c);
pp(x+3,y+27,174,c);
pp(x+3,y+28,81,c);
pp(x+3,y+42,177,c);
pp(x+3,y+43,255,c);
pp(x+4,y+16,85,c);
pp(x+4,y+17,205,c);
pp(x+4,y+18,254,c);
pp(x+4,y+19,255,c);
pp(x+4,y+20,255,c);
pp(x+4,y+21,255,c);
pp(x+4,y+22,255,c);
pp(x+4,y+23,255,c);
pp(x+4,y+24,255,c);
pp(x+4,y+25,255,c);
pp(x+4,y+26,255,c);
pp(x+4,y+27,255,c);
pp(x+4,y+28,253,c);
pp(x+4,y+29,197,c);
pp(x+4,y+30,77,c);
pp(x+4,y+41,42,c);
pp(x+4,y+42,246,c);
pp(x+4,y+43,255,c);
pp(x+5,y+15,136,c);
pp(x+5,y+16,245,c);
pp(x+5,y+17,255,c);
pp(x+5,y+18,255,c);
pp(x+5,y+19,255,c);
pp(x+5,y+20,255,c);
pp(x+5,y+21,255,c);
pp(x+5,y+22,255,c);
pp(x+5,y+23,255,c);
pp(x+5,y+24,255,c);
pp(x+5,y+25,255,c);
pp(x+5,y+26,255,c);
pp(x+5,y+27,255,c);
pp(x+5,y+28,255,c);
pp(x+5,y+29,255,c);
pp(x+5,y+30,245,c);
pp(x+5,y+31,134,c);
pp(x+5,y+41,174,c);
pp(x+5,y+42,255,c);
pp(x+5,y+43,235,c);
pp(x+6,y+14,147,c);
pp(x+6,y+15,253,c);
pp(x+6,y+16,255,c);
pp(x+6,y+17,255,c);
pp(x+6,y+18,255,c);
pp(x+6,y+19,255,c);
pp(x+6,y+20,255,c);
pp(x+6,y+21,255,c);
pp(x+6,y+22,255,c);
pp(x+6,y+23,255,c);
pp(x+6,y+24,255,c);
pp(x+6,y+25,255,c);
pp(x+6,y+26,255,c);
pp(x+6,y+27,255,c);
pp(x+6,y+28,255,c);
pp(x+6,y+29,255,c);
pp(x+6,y+30,255,c);
pp(x+6,y+31,251,c);
pp(x+6,y+32,132,c);
pp(x+6,y+41,238,c);
pp(x+6,y+42,255,c);
pp(x+6,y+43,159,c);
pp(x+7,y+13,132,c);
pp(x+7,y+14,252,c);
pp(x+7,y+15,255,c);
pp(x+7,y+16,255,c);
pp(x+7,y+17,222,c);
pp(x+7,y+18,159,c);
pp(x+7,y+19,110,c);
pp(x+7,y+20,22,c);
pp(x+7,y+22,42,c);
pp(x+7,y+23,138,c);
pp(x+7,y+24,191,c);
pp(x+7,y+25,249,c);
pp(x+7,y+26,255,c);
pp(x+7,y+27,255,c);
pp(x+7,y+28,255,c);
pp(x+7,y+29,255,c);
pp(x+7,y+30,255,c);
pp(x+7,y+31,255,c);
pp(x+7,y+32,242,c);
pp(x+7,y+33,61,c);
pp(x+7,y+40,147,c);
pp(x+7,y+41,255,c);
pp(x+7,y+42,248,c);
pp(x+7,y+43,22,c);
pp(x+8,y+12,77,c);
pp(x+8,y+13,245,c);
pp(x+8,y+14,255,c);
pp(x+8,y+15,246,c);
pp(x+8,y+16,147,c);
pp(x+8,y+25,95,c);
pp(x+8,y+26,234,c);
pp(x+8,y+27,255,c);
pp(x+8,y+28,255,c);
pp(x+8,y+29,255,c);
pp(x+8,y+30,255,c);
pp(x+8,y+31,255,c);
pp(x+8,y+32,255,c);
pp(x+8,y+33,187,c);
pp(x+8,y+40,221,c);
pp(x+8,y+41,255,c);
pp(x+8,y+42,212,c);
pp(x+9,y+12,205,c);
pp(x+9,y+13,255,c);
pp(x+9,y+14,244,c);
pp(x+9,y+15,108,c);
pp(x+9,y+26,88,c);
pp(x+9,y+27,245,c);
pp(x+9,y+28,255,c);
pp(x+9,y+29,255,c);
pp(x+9,y+30,255,c);
pp(x+9,y+31,255,c);
pp(x+9,y+32,255,c);
pp(x+9,y+33,241,c);
pp(x+9,y+39,110,c);
pp(x+9,y+40,255,c);
pp(x+9,y+41,255,c);
pp(x+9,y+42,174,c);
pp(x+10,y+11,98,c);
pp(x+10,y+12,254,c);
pp(x+10,y+13,252,c);
pp(x+10,y+14,120,c);
pp(x+10,y+27,136,c);
pp(x+10,y+28,255,c);
pp(x+10,y+29,255,c);
pp(x+10,y+30,255,c);
pp(x+10,y+31,255,c);
pp(x+10,y+32,255,c);
pp(x+10,y+33,255,c);
pp(x+10,y+34,120,c);
pp(x+10,y+39,198,c);
pp(x+10,y+40,255,c);
pp(x+10,y+41,255,c);
pp(x+10,y+42,152,c);
pp(x+11,y+11,182,c);
pp(x+11,y+12,255,c);
pp(x+11,y+13,187,c);
pp(x+11,y+28,209,c);
pp(x+11,y+29,255,c);
pp(x+11,y+30,255,c);
pp(x+11,y+31,255,c);
pp(x+11,y+32,255,c);
pp(x+11,y+33,255,c);
pp(x+11,y+34,166,c);
pp(x+11,y+38,61,c);
pp(x+11,y+39,251,c);
pp(x+11,y+40,255,c);
pp(x+11,y+41,255,c);
pp(x+11,y+42,148,c);
pp(x+12,y+11,223,c);
pp(x+12,y+12,253,c);
pp(x+12,y+13,56,c);
pp(x+12,y+28,124,c);
pp(x+12,y+29,255,c);
pp(x+12,y+30,255,c);
pp(x+12,y+31,255,c);
pp(x+12,y+32,255,c);
pp(x+12,y+33,255,c);
pp(x+12,y+34,206,c);
pp(x+12,y+38,177,c);
pp(x+12,y+39,255,c);
pp(x+12,y+40,255,c);
pp(x+12,y+41,255,c);
pp(x+12,y+42,156,c);
pp(x+13,y+11,252,c);
pp(x+13,y+12,214,c);
pp(x+13,y+29,247,c);
pp(x+13,y+30,255,c);
pp(x+13,y+31,255,c);
pp(x+13,y+32,255,c);
pp(x+13,y+33,255,c);
pp(x+13,y+34,215,c);
pp(x+13,y+38,238,c);
pp(x+13,y+39,255,c);
pp(x+13,y+40,255,c);
pp(x+13,y+41,255,c);
pp(x+13,y+42,174,c);
pp(x+14,y+10,88,c);
pp(x+14,y+11,255,c);
pp(x+14,y+12,166,c);
pp(x+14,y+29,246,c);
pp(x+14,y+30,255,c);
pp(x+14,y+31,255,c);
pp(x+14,y+32,255,c);
pp(x+14,y+33,255,c);
pp(x+14,y+34,221,c);
pp(x+14,y+37,150,c);
pp(x+14,y+38,255,c);
pp(x+14,y+39,255,c);
pp(x+14,y+40,255,c);
pp(x+14,y+41,255,c);
pp(x+14,y+42,208,c);
pp(x+15,y+10,143,c);
pp(x+15,y+11,255,c);
pp(x+15,y+12,143,c);
pp(x+15,y+28,22,c);
pp(x+15,y+29,254,c);
pp(x+15,y+30,255,c);
pp(x+15,y+31,255,c);
pp(x+15,y+32,255,c);
pp(x+15,y+33,255,c);
pp(x+15,y+34,241,c);
pp(x+15,y+37,229,c);
pp(x+15,y+38,255,c);
pp(x+15,y+39,255,c);
pp(x+15,y+40,255,c);
pp(x+15,y+41,255,c);
pp(x+15,y+42,219,c);
pp(x+16,y+10,147,c);
pp(x+16,y+11,255,c);
pp(x+16,y+12,148,c);
pp(x+16,y+28,197,c);
pp(x+16,y+29,255,c);
pp(x+16,y+30,255,c);
pp(x+16,y+31,255,c);
pp(x+16,y+32,255,c);
pp(x+16,y+33,255,c);
pp(x+16,y+34,238,c);
pp(x+16,y+36,143,c);
pp(x+16,y+37,255,c);
pp(x+16,y+38,255,c);
pp(x+16,y+39,255,c);
pp(x+16,y+40,185,c);
pp(x+16,y+41,255,c);
pp(x+16,y+42,249,c);
pp(x+17,y+10,147,c);
pp(x+17,y+11,255,c);
pp(x+17,y+12,171,c);
pp(x+17,y+27,182,c);
pp(x+17,y+28,255,c);
pp(x+17,y+29,255,c);
pp(x+17,y+30,255,c);
pp(x+17,y+31,255,c);
pp(x+17,y+32,255,c);
pp(x+17,y+33,235,c);
pp(x+17,y+34,95,c);
pp(x+17,y+36,234,c);
pp(x+17,y+37,255,c);
pp(x+17,y+38,255,c);
pp(x+17,y+39,226,c);
pp(x+17,y+40,141,c);
pp(x+17,y+41,255,c);
pp(x+17,y+42,255,c);
pp(x+17,y+43,61,c);
pp(x+18,y+10,143,c);
pp(x+18,y+11,255,c);
pp(x+18,y+12,218,c);
pp(x+18,y+27,234,c);
pp(x+18,y+28,255,c);
pp(x+18,y+29,255,c);
pp(x+18,y+30,255,c);
pp(x+18,y+31,254,c);
pp(x+18,y+32,196,c);
pp(x+18,y+33,50,c);
pp(x+18,y+35,177,c);
pp(x+18,y+36,255,c);
pp(x+18,y+37,255,c);
pp(x+18,y+38,255,c);
pp(x+18,y+39,161,c);
pp(x+18,y+40,141,c);
pp(x+18,y+41,255,c);
pp(x+18,y+42,255,c);
pp(x+18,y+43,147,c);
pp(x+19,y+10,110,c);
pp(x+19,y+11,255,c);
pp(x+19,y+12,254,c);
pp(x+19,y+13,81,c);
pp(x+19,y+27,186,c);
pp(x+19,y+28,248,c);
pp(x+19,y+29,228,c);
pp(x+19,y+30,191,c);
pp(x+19,y+31,102,c);
pp(x+19,y+34,105,c);
pp(x+19,y+35,250,c);
pp(x+19,y+36,255,c);
pp(x+19,y+37,255,c);
pp(x+19,y+38,245,c);
pp(x+19,y+39,22,c);
pp(x+19,y+40,134,c);
pp(x+19,y+41,255,c);
pp(x+19,y+42,255,c);
pp(x+19,y+43,175,c);
pp(x+20,y+10,42,c);
pp(x+20,y+11,255,c);
pp(x+20,y+12,255,c);
pp(x+20,y+13,197,c);
pp(x+20,y+33,50,c);
pp(x+20,y+34,231,c);
pp(x+20,y+35,255,c);
pp(x+20,y+36,255,c);
pp(x+20,y+37,255,c);
pp(x+20,y+38,191,c);
pp(x+20,y+40,108,c);
pp(x+20,y+41,255,c);
pp(x+20,y+42,255,c);
pp(x+20,y+43,208,c);
pp(x+21,y+11,249,c);
pp(x+21,y+12,255,c);
pp(x+21,y+13,255,c);
pp(x+21,y+14,128,c);
pp(x+21,y+33,210,c);
pp(x+21,y+34,255,c);
pp(x+21,y+35,255,c);
pp(x+21,y+36,255,c);
pp(x+21,y+37,255,c);
pp(x+21,y+38,98,c);
pp(x+21,y+40,95,c);
pp(x+21,y+41,255,c);
pp(x+21,y+42,255,c);
pp(x+21,y+43,227,c);
pp(x+22,y+11,219,c);
pp(x+22,y+12,255,c);
pp(x+22,y+13,255,c);
pp(x+22,y+14,245,c);
pp(x+22,y+15,95,c);
pp(x+22,y+32,198,c);
pp(x+22,y+33,255,c);
pp(x+22,y+34,255,c);
pp(x+22,y+35,255,c);
pp(x+22,y+36,255,c);
pp(x+22,y+37,220,c);
pp(x+22,y+40,134,c);
pp(x+22,y+41,255,c);
pp(x+22,y+42,255,c);
pp(x+22,y+43,252,c);
pp(x+23,y+11,189,c);
pp(x+23,y+12,255,c);
pp(x+23,y+13,255,c);
pp(x+23,y+14,255,c);
pp(x+23,y+15,243,c);
pp(x+23,y+16,118,c);
pp(x+23,y+30,42,c);
pp(x+23,y+31,208,c);
pp(x+23,y+32,255,c);
pp(x+23,y+33,255,c);
pp(x+23,y+34,255,c);
pp(x+23,y+35,255,c);
pp(x+23,y+36,255,c);
pp(x+23,y+37,141,c);
pp(x+23,y+40,143,c);
pp(x+23,y+41,255,c);
pp(x+23,y+42,255,c);
pp(x+23,y+43,255,c);
pp(x+24,y+11,120,c);
pp(x+24,y+12,255,c);
pp(x+24,y+13,255,c);
pp(x+24,y+14,255,c);
pp(x+24,y+15,255,c);
pp(x+24,y+16,254,c);
pp(x+24,y+17,187,c);
pp(x+24,y+18,56,c);
pp(x+24,y+29,134,c);
pp(x+24,y+30,235,c);
pp(x+24,y+31,255,c);
pp(x+24,y+32,255,c);
pp(x+24,y+33,255,c);
pp(x+24,y+34,255,c);
pp(x+24,y+35,255,c);
pp(x+24,y+36,233,c);
pp(x+24,y+40,150,c);
pp(x+24,y+41,255,c);
pp(x+24,y+42,255,c);
pp(x+24,y+43,255,c);
pp(x+25,y+12,230,c);
pp(x+25,y+13,255,c);
pp(x+25,y+14,255,c);
pp(x+25,y+15,255,c);
pp(x+25,y+16,255,c);
pp(x+25,y+17,255,c);
pp(x+25,y+18,247,c);
pp(x+25,y+19,198,c);
pp(x+25,y+20,143,c);
pp(x+25,y+21,42,c);
pp(x+25,y+25,77,c);
pp(x+25,y+26,150,c);
pp(x+25,y+27,186,c);
pp(x+25,y+28,230,c);
pp(x+25,y+29,255,c);
pp(x+25,y+30,255,c);
pp(x+25,y+31,255,c);
pp(x+25,y+32,255,c);
pp(x+25,y+33,255,c);
pp(x+25,y+34,255,c);
pp(x+25,y+35,255,c);
pp(x+25,y+36,150,c);
pp(x+25,y+40,163,c);
pp(x+25,y+41,255,c);
pp(x+25,y+42,255,c);
pp(x+25,y+43,255,c);
pp(x+26,y+12,150,c);
pp(x+26,y+13,255,c);
pp(x+26,y+14,255,c);
pp(x+26,y+15,255,c);
pp(x+26,y+16,255,c);
pp(x+26,y+17,255,c);
pp(x+26,y+18,255,c);
pp(x+26,y+19,255,c);
pp(x+26,y+20,255,c);
pp(x+26,y+21,255,c);
pp(x+26,y+22,250,c);
pp(x+26,y+23,249,c);
pp(x+26,y+24,252,c);
pp(x+26,y+25,255,c);
pp(x+26,y+26,255,c);
pp(x+26,y+27,255,c);
pp(x+26,y+28,255,c);
pp(x+26,y+29,255,c);
pp(x+26,y+30,255,c);
pp(x+26,y+31,255,c);
pp(x+26,y+32,255,c);
pp(x+26,y+33,255,c);
pp(x+26,y+34,255,c);
pp(x+26,y+35,226,c);
pp(x+26,y+40,205,c);
pp(x+26,y+41,255,c);
pp(x+26,y+42,255,c);
pp(x+26,y+43,255,c);
pp(x+27,y+13,228,c);
pp(x+27,y+14,255,c);
pp(x+27,y+15,255,c);
pp(x+27,y+16,255,c);
pp(x+27,y+17,255,c);
pp(x+27,y+18,255,c);
pp(x+27,y+19,255,c);
pp(x+27,y+20,255,c);
pp(x+27,y+21,255,c);
pp(x+27,y+22,255,c);
pp(x+27,y+23,255,c);
pp(x+27,y+24,255,c);
pp(x+27,y+25,255,c);
pp(x+27,y+26,255,c);
pp(x+27,y+27,255,c);
pp(x+27,y+28,255,c);
pp(x+27,y+29,255,c);
pp(x+27,y+30,255,c);
pp(x+27,y+31,255,c);
pp(x+27,y+32,255,c);
pp(x+27,y+33,255,c);
pp(x+27,y+34,254,c);
pp(x+27,y+35,113,c);
pp(x+27,y+40,228,c);
pp(x+27,y+41,255,c);
pp(x+27,y+42,255,c);
pp(x+27,y+43,255,c);
pp(x+28,y+13,113,c);
pp(x+28,y+14,252,c);
pp(x+28,y+15,255,c);
pp(x+28,y+16,255,c);
pp(x+28,y+17,255,c);
pp(x+28,y+18,255,c);
pp(x+28,y+19,255,c);
pp(x+28,y+20,255,c);
pp(x+28,y+21,255,c);
pp(x+28,y+22,255,c);
pp(x+28,y+23,255,c);
pp(x+28,y+24,255,c);
pp(x+28,y+25,255,c);
pp(x+28,y+26,255,c);
pp(x+28,y+27,255,c);
pp(x+28,y+28,255,c);
pp(x+28,y+29,255,c);
pp(x+28,y+30,255,c);
pp(x+28,y+31,255,c);
pp(x+28,y+32,255,c);
pp(x+28,y+33,255,c);
pp(x+28,y+34,186,c);
pp(x+28,y+39,85,c);
pp(x+28,y+40,254,c);
pp(x+28,y+41,255,c);
pp(x+28,y+42,255,c);
pp(x+28,y+43,255,c);
pp(x+29,y+14,174,c);
pp(x+29,y+15,255,c);
pp(x+29,y+16,255,c);
pp(x+29,y+17,255,c);
pp(x+29,y+18,255,c);
pp(x+29,y+19,255,c);
pp(x+29,y+20,255,c);
pp(x+29,y+21,255,c);
pp(x+29,y+22,255,c);
pp(x+29,y+23,255,c);
pp(x+29,y+24,255,c);
pp(x+29,y+25,255,c);
pp(x+29,y+26,255,c);
pp(x+29,y+27,255,c);
pp(x+29,y+28,255,c);
pp(x+29,y+29,255,c);
pp(x+29,y+30,255,c);
pp(x+29,y+31,255,c);
pp(x+29,y+32,255,c);
pp(x+29,y+33,221,c);
pp(x+29,y+39,186,c);
pp(x+29,y+40,255,c);
pp(x+29,y+41,255,c);
pp(x+29,y+42,255,c);
pp(x+29,y+43,255,c);
pp(x+30,y+15,193,c);
pp(x+30,y+16,255,c);
pp(x+30,y+17,255,c);
pp(x+30,y+18,255,c);
pp(x+30,y+19,255,c);
pp(x+30,y+20,255,c);
pp(x+30,y+21,255,c);
pp(x+30,y+22,255,c);
pp(x+30,y+23,255,c);
pp(x+30,y+24,255,c);
pp(x+30,y+25,255,c);
pp(x+30,y+26,255,c);
pp(x+30,y+27,255,c);
pp(x+30,y+28,255,c);
pp(x+30,y+29,255,c);
pp(x+30,y+30,255,c);
pp(x+30,y+31,255,c);
pp(x+30,y+32,228,c);
pp(x+30,y+33,61,c);
pp(x+30,y+38,92,c);
pp(x+30,y+39,249,c);
pp(x+30,y+40,255,c);
pp(x+30,y+41,255,c);
pp(x+30,y+42,255,c);
pp(x+30,y+43,255,c);
pp(x+31,y+16,177,c);
pp(x+31,y+17,254,c);
pp(x+31,y+18,255,c);
pp(x+31,y+19,255,c);
pp(x+31,y+20,255,c);
pp(x+31,y+21,255,c);
pp(x+31,y+22,255,c);
pp(x+31,y+23,255,c);
pp(x+31,y+24,255,c);
pp(x+31,y+25,255,c);
pp(x+31,y+26,255,c);
pp(x+31,y+27,255,c);
pp(x+31,y+28,255,c);
pp(x+31,y+29,255,c);
pp(x+31,y+30,255,c);
pp(x+31,y+31,212,c);
pp(x+31,y+32,50,c);
pp(x+31,y+37,34,c);
pp(x+31,y+38,226,c);
pp(x+31,y+39,255,c);
pp(x+31,y+40,255,c);
pp(x+31,y+41,255,c);
pp(x+31,y+42,255,c);
pp(x+31,y+43,254,c);
pp(x+32,y+17,120,c);
pp(x+32,y+18,231,c);
pp(x+32,y+19,255,c);
pp(x+32,y+20,255,c);
pp(x+32,y+21,255,c);
pp(x+32,y+22,255,c);
pp(x+32,y+23,255,c);
pp(x+32,y+24,255,c);
pp(x+32,y+25,255,c);
pp(x+32,y+26,255,c);
pp(x+32,y+27,255,c);
pp(x+32,y+28,255,c);
pp(x+32,y+29,246,c);
pp(x+32,y+30,167,c);
pp(x+32,y+36,56,c);
pp(x+32,y+37,216,c);
pp(x+32,y+38,255,c);
pp(x+32,y+39,255,c);
pp(x+32,y+40,255,c);
pp(x+32,y+41,255,c);
pp(x+32,y+42,255,c);
pp(x+32,y+43,226,c);
pp(x+33,y+19,136,c);
pp(x+33,y+20,206,c);
pp(x+33,y+21,238,c);
pp(x+33,y+22,254,c);
pp(x+33,y+23,255,c);
pp(x+33,y+24,255,c);
pp(x+33,y+25,255,c);
pp(x+33,y+26,251,c);
pp(x+33,y+27,219,c);
pp(x+33,y+28,171,c);
pp(x+33,y+29,61,c);
pp(x+33,y+35,102,c);
pp(x+33,y+36,237,c);
pp(x+33,y+37,255,c);
pp(x+33,y+38,255,c);
pp(x+33,y+39,255,c);
pp(x+33,y+40,255,c);
pp(x+33,y+41,251,c);
pp(x+33,y+42,219,c);
pp(x+33,y+43,134,c);
pp(x+34,y+22,22,c);
pp(x+34,y+23,56,c);
pp(x+34,y+24,61,c);
pp(x+34,y+25,42,c);
pp(x+34,y+35,164,c);
pp(x+34,y+36,255,c);
pp(x+34,y+37,253,c);
pp(x+34,y+38,222,c);
pp(x+34,y+39,182,c);
pp(x+34,y+40,130,c);
pp(x+34,y+41,22,c);
pp(x+35,y+35,50,c);
pp(x+35,y+36,145,c);
pp(x+35,y+37,34,c);
return 38;
}
int print_0057(int x, int y, int c) {
pp(x+2,y+13,81,c);
pp(x+2,y+14,158,c);
pp(x+2,y+15,158,c);
pp(x+2,y+16,105,c);
pp(x+3,y+12,130,c);
pp(x+3,y+13,249,c);
pp(x+3,y+14,255,c);
pp(x+3,y+15,255,c);
pp(x+3,y+16,255,c);
pp(x+3,y+17,196,c);
pp(x+4,y+11,61,c);
pp(x+4,y+12,243,c);
pp(x+4,y+13,255,c);
pp(x+4,y+14,255,c);
pp(x+4,y+15,255,c);
pp(x+4,y+16,255,c);
pp(x+4,y+17,255,c);
pp(x+4,y+18,156,c);
pp(x+5,y+11,183,c);
pp(x+5,y+12,255,c);
pp(x+5,y+13,255,c);
pp(x+5,y+14,255,c);
pp(x+5,y+15,255,c);
pp(x+5,y+16,255,c);
pp(x+5,y+17,255,c);
pp(x+5,y+18,214,c);
pp(x+5,y+20,115,c);
pp(x+5,y+21,156,c);
pp(x+5,y+22,158,c);
pp(x+5,y+23,148,c);
pp(x+5,y+24,73,c);
pp(x+6,y+11,233,c);
pp(x+6,y+12,255,c);
pp(x+6,y+13,255,c);
pp(x+6,y+14,255,c);
pp(x+6,y+15,255,c);
pp(x+6,y+16,253,c);
pp(x+6,y+17,222,c);
pp(x+6,y+18,238,c);
pp(x+6,y+19,239,c);
pp(x+6,y+20,255,c);
pp(x+6,y+21,255,c);
pp(x+6,y+22,255,c);
pp(x+6,y+23,255,c);
pp(x+6,y+24,254,c);
pp(x+6,y+25,223,c);
pp(x+6,y+26,166,c);
pp(x+6,y+27,34,c);
pp(x+7,y+10,22,c);
pp(x+7,y+11,254,c);
pp(x+7,y+12,255,c);
pp(x+7,y+13,255,c);
pp(x+7,y+14,250,c);
pp(x+7,y+15,183,c);
pp(x+7,y+16,66,c);
pp(x+7,y+17,200,c);
pp(x+7,y+18,255,c);
pp(x+7,y+19,255,c);
pp(x+7,y+20,255,c);
pp(x+7,y+21,255,c);
pp(x+7,y+22,255,c);
pp(x+7,y+23,255,c);
pp(x+7,y+24,255,c);
pp(x+7,y+25,255,c);
pp(x+7,y+26,255,c);
pp(x+7,y+27,243,c);
pp(x+7,y+28,174,c);
pp(x+7,y+29,22,c);
pp(x+8,y+10,56,c);
pp(x+8,y+11,255,c);
pp(x+8,y+12,255,c);
pp(x+8,y+13,250,c);
pp(x+8,y+14,126,c);
pp(x+8,y+16,197,c);
pp(x+8,y+17,255,c);
pp(x+8,y+18,255,c);
pp(x+8,y+19,255,c);
pp(x+8,y+20,255,c);
pp(x+8,y+21,255,c);
pp(x+8,y+22,255,c);
pp(x+8,y+23,255,c);
pp(x+8,y+24,255,c);
pp(x+8,y+25,255,c);
pp(x+8,y+26,255,c);
pp(x+8,y+27,255,c);
pp(x+8,y+28,255,c);
pp(x+8,y+29,234,c);
pp(x+8,y+30,124,c);
pp(x+9,y+10,61,c);
pp(x+9,y+11,255,c);
pp(x+9,y+12,255,c);
pp(x+9,y+13,185,c);
pp(x+9,y+15,108,c);
pp(x+9,y+16,255,c);
pp(x+9,y+17,255,c);
pp(x+9,y+18,255,c);
pp(x+9,y+19,255,c);
pp(x+9,y+20,255,c);
pp(x+9,y+21,255,c);
pp(x+9,y+22,255,c);
pp(x+9,y+23,255,c);
pp(x+9,y+24,255,c);
pp(x+9,y+25,255,c);
pp(x+9,y+26,255,c);
pp(x+9,y+27,255,c);
pp(x+9,y+28,255,c);
pp(x+9,y+29,255,c);
pp(x+9,y+30,255,c);
pp(x+9,y+31,197,c);
pp(x+9,y+32,56,c);
pp(x+10,y+10,50,c);
pp(x+10,y+11,255,c);
pp(x+10,y+12,255,c);
pp(x+10,y+13,81,c);
pp(x+10,y+15,182,c);
pp(x+10,y+16,255,c);
pp(x+10,y+17,255,c);
pp(x+10,y+18,255,c);
pp(x+10,y+19,255,c);
pp(x+10,y+20,255,c);
pp(x+10,y+21,255,c);
pp(x+10,y+22,255,c);
pp(x+10,y+23,255,c);
pp(x+10,y+24,255,c);
pp(x+10,y+25,255,c);
pp(x+10,y+26,255,c);
pp(x+10,y+27,255,c);
pp(x+10,y+28,255,c);
pp(x+10,y+29,255,c);
pp(x+10,y+30,255,c);
pp(x+10,y+31,255,c);
pp(x+10,y+32,240,c);
pp(x+10,y+33,141,c);
pp(x+11,y+11,254,c);
pp(x+11,y+12,247,c);
pp(x+11,y+15,212,c);
pp(x+11,y+16,255,c);
pp(x+11,y+17,255,c);
pp(x+11,y+18,255,c);
pp(x+11,y+19,255,c);
pp(x+11,y+20,255,c);
pp(x+11,y+21,255,c);
pp(x+11,y+22,255,c);
pp(x+11,y+23,255,c);
pp(x+11,y+24,255,c);
pp(x+11,y+25,255,c);
pp(x+11,y+26,255,c);
pp(x+11,y+27,255,c);
pp(x+11,y+28,255,c);
pp(x+11,y+29,255,c);
pp(x+11,y+30,255,c);
pp(x+11,y+31,255,c);
pp(x+11,y+32,255,c);
pp(x+11,y+33,255,c);
pp(x+11,y+34,202,c);
pp(x+11,y+35,61,c);
pp(x+12,y+11,244,c);
pp(x+12,y+12,247,c);
pp(x+12,y+15,220,c);
pp(x+12,y+16,255,c);
pp(x+12,y+17,252,c);
pp(x+12,y+18,215,c);
pp(x+12,y+19,206,c);
pp(x+12,y+20,206,c);
pp(x+12,y+21,214,c);
pp(x+12,y+22,247,c);
pp(x+12,y+23,255,c);
pp(x+12,y+24,255,c);
pp(x+12,y+25,255,c);
pp(x+12,y+26,255,c);
pp(x+12,y+27,255,c);
pp(x+12,y+28,255,c);
pp(x+12,y+29,255,c);
pp(x+12,y+30,255,c);
pp(x+12,y+31,255,c);
pp(x+12,y+32,255,c);
pp(x+12,y+33,255,c);
pp(x+12,y+34,255,c);
pp(x+12,y+35,241,c);
pp(x+12,y+36,141,c);
pp(x+13,y+11,215,c);
pp(x+13,y+12,253,c);
pp(x+13,y+15,238,c);
pp(x+13,y+16,199,c);
pp(x+13,y+17,34,c);
pp(x+13,y+22,22,c);
pp(x+13,y+23,163,c);
pp(x+13,y+24,239,c);
pp(x+13,y+25,255,c);
pp(x+13,y+26,255,c);
pp(x+13,y+27,255,c);
pp(x+13,y+28,255,c);
pp(x+13,y+29,255,c);
pp(x+13,y+30,255,c);
pp(x+13,y+31,255,c);
pp(x+13,y+32,255,c);
pp(x+13,y+33,255,c);
pp(x+13,y+34,255,c);
pp(x+13,y+35,255,c);
pp(x+13,y+36,255,c);
pp(x+13,y+37,206,c);
pp(x+13,y+38,77,c);
pp(x+14,y+11,200,c);
pp(x+14,y+12,255,c);
pp(x+14,y+13,42,c);
pp(x+14,y+15,88,c);
pp(x+14,y+24,34,c);
pp(x+14,y+25,182,c);
pp(x+14,y+26,250,c);
pp(x+14,y+27,255,c);
pp(x+14,y+28,255,c);
pp(x+14,y+29,255,c);
pp(x+14,y+30,255,c);
pp(x+14,y+31,255,c);
pp(x+14,y+32,255,c);
pp(x+14,y+33,255,c);
pp(x+14,y+34,255,c);
pp(x+14,y+35,255,c);
pp(x+14,y+36,255,c);
pp(x+14,y+37,255,c);
pp(x+14,y+38,246,c);
pp(x+14,y+39,171,c);
pp(x+15,y+11,156,c);
pp(x+15,y+12,255,c);
pp(x+15,y+13,128,c);
pp(x+15,y+26,92,c);
pp(x+15,y+27,210,c);
pp(x+15,y+28,255,c);
pp(x+15,y+29,255,c);
pp(x+15,y+30,255,c);
pp(x+15,y+31,255,c);
pp(x+15,y+32,255,c);
pp(x+15,y+33,255,c);
pp(x+15,y+34,255,c);
pp(x+15,y+35,255,c);
pp(x+15,y+36,255,c);
pp(x+15,y+37,255,c);
pp(x+15,y+38,255,c);
pp(x+15,y+39,255,c);
pp(x+15,y+40,234,c);
pp(x+15,y+41,148,c);
pp(x+15,y+43,42,c);
pp(x+16,y+11,108,c);
pp(x+16,y+12,255,c);
pp(x+16,y+13,152,c);
pp(x+16,y+28,138,c);
pp(x+16,y+29,236,c);
pp(x+16,y+30,255,c);
pp(x+16,y+31,255,c);
pp(x+16,y+32,255,c);
pp(x+16,y+33,255,c);
pp(x+16,y+34,255,c);
pp(x+16,y+35,255,c);
pp(x+16,y+36,255,c);
pp(x+16,y+37,255,c);
pp(x+16,y+38,255,c);
pp(x+16,y+39,255,c);
pp(x+16,y+40,255,c);
pp(x+16,y+41,255,c);
pp(x+16,y+42,251,c);
pp(x+16,y+43,255,c);
pp(x+17,y+12,251,c);
pp(x+17,y+13,164,c);
pp(x+17,y+29,34,c);
pp(x+17,y+30,186,c);
pp(x+17,y+31,252,c);
pp(x+17,y+32,255,c);
pp(x+17,y+33,255,c);
pp(x+17,y+34,255,c);
pp(x+17,y+35,255,c);
pp(x+17,y+36,255,c);
pp(x+17,y+37,255,c);
pp(x+17,y+38,255,c);
pp(x+17,y+39,255,c);
pp(x+17,y+40,255,c);
pp(x+17,y+41,255,c);
pp(x+17,y+42,255,c);
pp(x+17,y+43,255,c);
pp(x+18,y+12,222,c);
pp(x+18,y+13,197,c);
pp(x+18,y+31,105,c);
pp(x+18,y+32,223,c);
pp(x+18,y+33,255,c);
pp(x+18,y+34,255,c);
pp(x+18,y+35,255,c);
pp(x+18,y+36,255,c);
pp(x+18,y+37,255,c);
pp(x+18,y+38,255,c);
pp(x+18,y+39,255,c);
pp(x+18,y+40,255,c);
pp(x+18,y+41,255,c);
pp(x+18,y+42,252,c);
pp(x+18,y+43,158,c);
pp(x+19,y+12,203,c);
pp(x+19,y+13,205,c);
pp(x+19,y+32,147,c);
pp(x+19,y+33,245,c);
pp(x+19,y+34,255,c);
pp(x+19,y+35,255,c);
pp(x+19,y+36,255,c);
pp(x+19,y+37,255,c);
pp(x+19,y+38,255,c);
pp(x+19,y+39,255,c);
pp(x+19,y+40,255,c);
pp(x+19,y+41,230,c);
pp(x+19,y+42,115,c);
pp(x+20,y+12,164,c);
pp(x+20,y+13,205,c);
pp(x+20,y+29,42,c);
pp(x+20,y+30,175,c);
pp(x+20,y+31,240,c);
pp(x+20,y+32,255,c);
pp(x+20,y+33,255,c);
pp(x+20,y+34,254,c);
pp(x+20,y+35,199,c);
pp(x+20,y+36,202,c);
pp(x+20,y+37,212,c);
pp(x+20,y+38,210,c);
pp(x+20,y+39,189,c);
pp(x+20,y+40,130,c);
pp(x+21,y+12,166,c);
pp(x+21,y+13,197,c);
pp(x+21,y+20,128,c);
pp(x+21,y+21,164,c);
pp(x+21,y+22,198,c);
pp(x+21,y+23,196,c);
pp(x+21,y+24,163,c);
pp(x+21,y+25,110,c);
pp(x+21,y+27,110,c);
pp(x+21,y+28,190,c);
pp(x+21,y+29,245,c);
pp(x+21,y+30,255,c);
pp(x+21,y+31,255,c);
pp(x+21,y+32,255,c);
pp(x+21,y+33,212,c);
pp(x+21,y+34,105,c);
pp(x+22,y+12,154,c);
pp(x+22,y+13,147,c);
pp(x+22,y+17,42,c);
pp(x+22,y+18,180,c);
pp(x+22,y+19,241,c);
pp(x+22,y+20,255,c);
pp(x+22,y+21,255,c);
pp(x+22,y+22,255,c);
pp(x+22,y+23,255,c);
pp(x+22,y+24,255,c);
pp(x+22,y+25,255,c);
pp(x+22,y+26,250,c);
pp(x+22,y+27,255,c);
pp(x+22,y+28,255,c);
pp(x+22,y+29,255,c);
pp(x+22,y+30,255,c);
pp(x+22,y+31,224,c);
pp(x+22,y+32,120,c);
pp(x+23,y+16,95,c);
pp(x+23,y+17,237,c);
pp(x+23,y+18,255,c);
pp(x+23,y+19,255,c);
pp(x+23,y+20,255,c);
pp(x+23,y+21,255,c);
pp(x+23,y+22,255,c);
pp(x+23,y+23,255,c);
pp(x+23,y+24,255,c);
pp(x+23,y+25,255,c);
pp(x+23,y+26,255,c);
pp(x+23,y+27,255,c);
pp(x+23,y+28,255,c);
pp(x+23,y+29,234,c);
pp(x+23,y+30,143,c);
pp(x+24,y+15,85,c);
pp(x+24,y+16,241,c);
pp(x+24,y+17,255,c);
pp(x+24,y+18,255,c);
pp(x+24,y+19,255,c);
pp(x+24,y+20,255,c);
pp(x+24,y+21,255,c);
pp(x+24,y+22,255,c);
pp(x+24,y+23,255,c);
pp(x+24,y+24,255,c);
pp(x+24,y+25,255,c);
pp(x+24,y+26,255,c);
pp(x+24,y+27,255,c);
pp(x+24,y+28,202,c);
pp(x+25,y+15,229,c);
pp(x+25,y+16,255,c);
pp(x+25,y+17,255,c);
pp(x+25,y+18,255,c);
pp(x+25,y+19,255,c);
pp(x+25,y+20,255,c);
pp(x+25,y+21,255,c);
pp(x+25,y+22,255,c);
pp(x+25,y+23,255,c);
pp(x+25,y+24,255,c);
pp(x+25,y+25,255,c);
pp(x+25,y+26,255,c);
pp(x+25,y+27,255,c);
pp(x+25,y+28,253,c);
pp(x+25,y+29,164,c);
pp(x+26,y+14,50,c);
pp(x+26,y+15,255,c);
pp(x+26,y+16,255,c);
pp(x+26,y+17,255,c);
pp(x+26,y+18,255,c);
pp(x+26,y+19,255,c);
pp(x+26,y+20,255,c);
pp(x+26,y+21,255,c);
pp(x+26,y+22,255,c);
pp(x+26,y+23,255,c);
pp(x+26,y+24,255,c);
pp(x+26,y+25,255,c);
pp(x+26,y+26,255,c);
pp(x+26,y+27,255,c);
pp(x+26,y+28,255,c);
pp(x+26,y+29,255,c);
pp(x+26,y+30,190,c);
pp(x+27,y+14,22,c);
pp(x+27,y+15,219,c);
pp(x+27,y+16,215,c);
pp(x+27,y+17,213,c);
pp(x+27,y+18,216,c);
pp(x+27,y+19,235,c);
pp(x+27,y+20,255,c);
pp(x+27,y+21,255,c);
pp(x+27,y+22,255,c);
pp(x+27,y+23,255,c);
pp(x+27,y+24,255,c);
pp(x+27,y+25,255,c);
pp(x+27,y+26,255,c);
pp(x+27,y+27,255,c);
pp(x+27,y+28,255,c);
pp(x+27,y+29,255,c);
pp(x+27,y+30,255,c);
pp(x+27,y+31,213,c);
pp(x+27,y+32,50,c);
pp(x+28,y+20,128,c);
pp(x+28,y+21,238,c);
pp(x+28,y+22,255,c);
pp(x+28,y+23,255,c);
pp(x+28,y+24,255,c);
pp(x+28,y+25,255,c);
pp(x+28,y+26,255,c);
pp(x+28,y+27,255,c);
pp(x+28,y+28,255,c);
pp(x+28,y+29,255,c);
pp(x+28,y+30,255,c);
pp(x+28,y+31,255,c);
pp(x+28,y+32,230,c);
pp(x+28,y+33,81,c);
pp(x+29,y+11,124,c);
pp(x+29,y+12,34,c);
pp(x+29,y+21,61,c);
pp(x+29,y+22,210,c);
pp(x+29,y+23,255,c);
pp(x+29,y+24,255,c);
pp(x+29,y+25,255,c);
pp(x+29,y+26,255,c);
pp(x+29,y+27,255,c);
pp(x+29,y+28,255,c);
pp(x+29,y+29,255,c);
pp(x+29,y+30,255,c);
pp(x+29,y+31,255,c);
pp(x+29,y+32,255,c);
pp(x+29,y+33,242,c);
pp(x+29,y+34,118,c);
pp(x+30,y+11,203,c);
pp(x+30,y+12,206,c);
pp(x+30,y+23,177,c);
pp(x+30,y+24,255,c);
pp(x+30,y+25,255,c);
pp(x+30,y+26,255,c);
pp(x+30,y+27,255,c);
pp(x+30,y+28,255,c);
pp(x+30,y+29,255,c);
pp(x+30,y+30,255,c);
pp(x+30,y+31,255,c);
pp(x+30,y+32,255,c);
pp(x+30,y+33,255,c);
pp(x+30,y+34,252,c);
pp(x+30,y+35,183,c);
pp(x+30,y+36,22,c);
pp(x+31,y+11,158,c);
pp(x+31,y+12,255,c);
pp(x+31,y+13,199,c);
pp(x+31,y+14,95,c);
pp(x+31,y+24,138,c);
pp(x+31,y+25,247,c);
pp(x+31,y+26,255,c);
pp(x+31,y+27,255,c);
pp(x+31,y+28,255,c);
pp(x+31,y+29,255,c);
pp(x+31,y+30,255,c);
pp(x+31,y+31,255,c);
pp(x+31,y+32,255,c);
pp(x+31,y+33,255,c);
pp(x+31,y+34,255,c);
pp(x+31,y+35,255,c);
pp(x+31,y+36,237,c);
pp(x+31,y+37,164,c);
pp(x+31,y+38,34,c);
pp(x+31,y+43,50,c);
pp(x+32,y+11,143,c);
pp(x+32,y+12,255,c);
pp(x+32,y+13,255,c);
pp(x+32,y+14,255,c);
pp(x+32,y+15,223,c);
pp(x+32,y+16,98,c);
pp(x+32,y+25,98,c);
pp(x+32,y+26,234,c);
pp(x+32,y+27,255,c);
pp(x+32,y+28,255,c);
pp(x+32,y+29,255,c);
pp(x+32,y+30,255,c);
pp(x+32,y+31,255,c);
pp(x+32,y+32,255,c);
pp(x+32,y+33,255,c);
pp(x+32,y+34,255,c);
pp(x+32,y+35,255,c);
pp(x+32,y+36,255,c);
pp(x+32,y+37,255,c);
pp(x+32,y+38,250,c);
pp(x+32,y+39,213,c);
pp(x+32,y+40,189,c);
pp(x+32,y+41,164,c);
pp(x+32,y+42,194,c);
pp(x+32,y+43,249,c);
pp(x+33,y+11,145,c);
pp(x+33,y+12,255,c);
pp(x+33,y+13,255,c);
pp(x+33,y+14,255,c);
pp(x+33,y+15,255,c);
pp(x+33,y+16,156,c);
pp(x+33,y+26,56,c);
pp(x+33,y+27,210,c);
pp(x+33,y+28,255,c);
pp(x+33,y+29,255,c);
pp(x+33,y+30,255,c);
pp(x+33,y+31,255,c);
pp(x+33,y+32,255,c);
pp(x+33,y+33,255,c);
pp(x+33,y+34,255,c);
pp(x+33,y+35,255,c);
pp(x+33,y+36,255,c);
pp(x+33,y+37,255,c);
pp(x+33,y+38,255,c);
pp(x+33,y+39,255,c);
pp(x+33,y+40,255,c);
pp(x+33,y+41,255,c);
pp(x+33,y+42,255,c);
pp(x+33,y+43,255,c);
pp(x+34,y+11,154,c);
pp(x+34,y+12,255,c);
pp(x+34,y+13,255,c);
pp(x+34,y+14,255,c);
pp(x+34,y+15,232,c);
pp(x+34,y+28,171,c);
pp(x+34,y+29,252,c);
pp(x+34,y+30,255,c);
pp(x+34,y+31,255,c);
pp(x+34,y+32,255,c);
pp(x+34,y+33,255,c);
pp(x+34,y+34,255,c);
pp(x+34,y+35,255,c);
pp(x+34,y+36,255,c);
pp(x+34,y+37,255,c);
pp(x+34,y+38,255,c);
pp(x+34,y+39,255,c);
pp(x+34,y+40,255,c);
pp(x+34,y+41,255,c);
pp(x+34,y+42,242,c);
pp(x+34,y+43,132,c);
pp(x+35,y+11,175,c);
pp(x+35,y+12,255,c);
pp(x+35,y+13,255,c);
pp(x+35,y+14,255,c);
pp(x+35,y+15,120,c);
pp(x+35,y+29,113,c);
pp(x+35,y+30,233,c);
pp(x+35,y+31,255,c);
pp(x+35,y+32,255,c);
pp(x+35,y+33,255,c);
pp(x+35,y+34,255,c);
pp(x+35,y+35,255,c);
pp(x+35,y+36,255,c);
pp(x+35,y+37,255,c);
pp(x+35,y+38,255,c);
pp(x+35,y+39,255,c);
pp(x+35,y+40,255,c);
pp(x+35,y+41,214,c);
pp(x+35,y+42,73,c);
pp(x+36,y+11,205,c);
pp(x+36,y+12,255,c);
pp(x+36,y+13,255,c);
pp(x+36,y+14,198,c);
pp(x+36,y+31,173,c);
pp(x+36,y+32,242,c);
pp(x+36,y+33,255,c);
pp(x+36,y+34,255,c);
pp(x+36,y+35,255,c);
pp(x+36,y+36,255,c);
pp(x+36,y+37,255,c);
pp(x+36,y+38,255,c);
pp(x+36,y+39,250,c);
pp(x+36,y+40,166,c);
pp(x+37,y+11,215,c);
pp(x+37,y+12,255,c);
pp(x+37,y+13,240,c);
pp(x+37,y+14,56,c);
pp(x+37,y+32,22,c);
pp(x+37,y+33,150,c);
pp(x+37,y+34,222,c);
pp(x+37,y+35,255,c);
pp(x+37,y+36,255,c);
pp(x+37,y+37,255,c);
pp(x+37,y+38,228,c);
pp(x+37,y+39,98,c);
pp(x+38,y+11,233,c);
pp(x+38,y+12,255,c);
pp(x+38,y+13,152,c);
pp(x+38,y+32,141,c);
pp(x+38,y+33,234,c);
pp(x+38,y+34,255,c);
pp(x+38,y+35,255,c);
pp(x+38,y+36,253,c);
pp(x+38,y+37,182,c);
pp(x+39,y+11,250,c);
pp(x+39,y+12,233,c);
pp(x+39,y+30,113,c);
pp(x+39,y+31,220,c);
pp(x+39,y+32,255,c);
pp(x+39,y+33,255,c);
pp(x+39,y+34,255,c);
pp(x+39,y+35,231,c);
pp(x+39,y+36,113,c);
pp(x+40,y+11,254,c);
pp(x+40,y+12,215,c);
pp(x+40,y+28,88,c);
pp(x+40,y+29,203,c);
pp(x+40,y+30,255,c);
pp(x+40,y+31,255,c);
pp(x+40,y+32,255,c);
pp(x+40,y+33,248,c);
pp(x+40,y+34,174,c);
pp(x+41,y+10,34,c);
pp(x+41,y+11,255,c);
pp(x+41,y+12,251,c);
pp(x+41,y+13,42,c);
pp(x+41,y+26,50,c);
pp(x+41,y+27,187,c);
pp(x+41,y+28,250,c);
pp(x+41,y+29,255,c);
pp(x+41,y+30,255,c);
pp(x+41,y+31,254,c);
pp(x+41,y+32,202,c);
pp(x+41,y+33,77,c);
pp(x+42,y+10,22,c);
pp(x+42,y+11,255,c);
pp(x+42,y+12,255,c);
pp(x+42,y+13,183,c);
pp(x+42,y+24,85,c);
pp(x+42,y+25,187,c);
pp(x+42,y+26,245,c);
pp(x+42,y+27,255,c);
pp(x+42,y+28,255,c);
pp(x+42,y+29,255,c);
pp(x+42,y+30,213,c);
pp(x+42,y+31,110,c);
pp(x+43,y+11,255,c);
pp(x+43,y+12,255,c);
pp(x+43,y+13,255,c);
pp(x+43,y+14,187,c);
pp(x+43,y+15,108,c);
pp(x+43,y+20,22,c);
pp(x+43,y+21,113,c);
pp(x+43,y+22,170,c);
pp(x+43,y+23,220,c);
pp(x+43,y+24,254,c);
pp(x+43,y+25,255,c);
pp(x+43,y+26,255,c);
pp(x+43,y+27,254,c);
pp(x+43,y+28,212,c);
pp(x+43,y+29,110,c);
pp(x+44,y+11,244,c);
pp(x+44,y+12,255,c);
pp(x+44,y+13,255,c);
pp(x+44,y+14,255,c);
pp(x+44,y+15,255,c);
pp(x+44,y+16,253,c);
pp(x+44,y+17,247,c);
pp(x+44,y+18,245,c);
pp(x+44,y+19,247,c);
pp(x+44,y+20,254,c);
pp(x+44,y+21,255,c);
pp(x+44,y+22,255,c);
pp(x+44,y+23,255,c);
pp(x+44,y+24,255,c);
pp(x+44,y+25,247,c);
pp(x+44,y+26,196,c);
pp(x+44,y+27,98,c);
pp(x+45,y+11,164,c);
pp(x+45,y+12,255,c);
pp(x+45,y+13,255,c);
pp(x+45,y+14,255,c);
pp(x+45,y+15,255,c);
pp(x+45,y+16,255,c);
pp(x+45,y+17,255,c);
pp(x+45,y+18,255,c);
pp(x+45,y+19,255,c);
pp(x+45,y+20,255,c);
pp(x+45,y+21,255,c);
pp(x+45,y+22,251,c);
pp(x+45,y+23,212,c);
pp(x+45,y+24,150,c);
pp(x+45,y+25,22,c);
pp(x+46,y+12,110,c);
pp(x+46,y+13,197,c);
pp(x+46,y+14,229,c);
pp(x+46,y+15,251,c);
pp(x+46,y+16,253,c);
pp(x+46,y+17,251,c);
pp(x+46,y+18,243,c);
pp(x+46,y+19,214,c);
pp(x+46,y+20,187,c);
pp(x+46,y+21,138,c);
pp(x+46,y+22,22,c);
return 50;
}