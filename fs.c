#include <wchar.h> 
#include <wctype.h> 
#include <locale.h>
#include "fs.h"
#include "drawing.h"

int fs_ch81(int x, int y, int c) {
pp(x+1,y+3,110,c);pp(x+1,y+4,207,c);pp(x+1,y+5,248,c);pp(x+1,y+6,255,c);pp(x+1,y+7,255,c);pp(x+1,y+8,255,c);pp(x+1,y+9,255,c);pp(x+1,y+10,251,c);pp(x+1,y+11,208,c);pp(x+1,y+12,118,c);pp(x+2,y+2,167,c);pp(x+2,y+3,253,c);pp(x+2,y+4,255,c);pp(x+2,y+5,255,c);pp(x+2,y+6,255,c);pp(x+2,y+7,255,c);pp(x+2,y+8,255,c);pp(x+2,y+9,255,c);pp(x+2,y+10,255,c);pp(x+2,y+11,255,c);pp(x+2,y+12,254,c);pp(x+2,y+13,175,c);pp(x+3,y+1,154,c);pp(x+3,y+2,255,c);pp(x+3,y+3,255,c);pp(x+3,y+4,255,c);pp(x+3,y+5,255,c);pp(x+3,y+6,244,c);pp(x+3,y+7,243,c);pp(x+3,y+8,243,c);pp(x+3,y+9,244,c);pp(x+3,y+10,255,c);pp(x+3,y+11,255,c);pp(x+3,y+12,255,c);pp(x+3,y+13,255,c);pp(x+3,y+14,163,c);pp(x+4,y+0,66,c);pp(x+4,y+1,247,c);pp(x+4,y+2,255,c);pp(x+4,y+3,255,c);pp(x+4,y+4,183,c);pp(x+4,y+5,22,c);pp(x+4,y+10,42,c);pp(x+4,y+11,183,c);pp(x+4,y+12,255,c);pp(x+4,y+13,255,c);pp(x+4,y+14,249,c);pp(x+4,y+15,77,c);pp(x+5,y+0,180,c);pp(x+5,y+1,255,c);pp(x+5,y+2,255,c);pp(x+5,y+3,177,c);pp(x+5,y+12,170,c);pp(x+5,y+13,255,c);pp(x+5,y+14,255,c);pp(x+5,y+15,185,c);pp(x+6,y+0,224,c);pp(x+6,y+1,255,c);pp(x+6,y+2,255,c);pp(x+6,y+13,255,c);pp(x+6,y+14,255,c);pp(x+6,y+15,226,c);pp(x+7,y+0,251,c);pp(x+7,y+1,255,c);pp(x+7,y+2,207,c);pp(x+7,y+13,205,c);pp(x+7,y+14,255,c);pp(x+7,y+15,251,c);pp(x+8,y+0,255,c);pp(x+8,y+1,255,c);pp(x+8,y+2,200,c);pp(x+8,y+13,200,c);pp(x+8,y+14,255,c);pp(x+8,y+15,255,c);pp(x+9,y+0,255,c);pp(x+9,y+1,255,c);pp(x+9,y+2,209,c);pp(x+9,y+11,193,c);pp(x+9,y+12,230,c);pp(x+9,y+13,212,c);pp(x+9,y+14,255,c);pp(x+9,y+15,255,c);pp(x+10,y+0,214,c);pp(x+10,y+1,255,c);pp(x+10,y+2,248,c);pp(x+10,y+3,61,c);pp(x+10,y+10,145,c);pp(x+10,y+11,255,c);pp(x+10,y+12,255,c);pp(x+10,y+13,255,c);pp(x+10,y+14,255,c);pp(x+10,y+15,220,c);pp(x+11,y+0,161,c);pp(x+11,y+1,255,c);pp(x+11,y+2,255,c);pp(x+11,y+3,207,c);pp(x+11,y+11,255,c);pp(x+11,y+12,255,c);pp(x+11,y+13,255,c);pp(x+11,y+14,255,c);pp(x+11,y+15,173,c);pp(x+12,y+0,22,c);pp(x+12,y+1,255,c);pp(x+12,y+2,255,c);pp(x+12,y+3,255,c);pp(x+12,y+4,213,c);pp(x+12,y+5,124,c);pp(x+12,y+6,42,c);pp(x+12,y+7,42,c);pp(x+12,y+8,42,c);pp(x+12,y+9,42,c);pp(x+12,y+10,126,c);pp(x+12,y+11,226,c);pp(x+12,y+12,255,c);pp(x+12,y+13,255,c);pp(x+12,y+14,255,c);pp(x+12,y+15,42,c);pp(x+13,y+1,118,c);pp(x+13,y+2,249,c);pp(x+13,y+3,255,c);pp(x+13,y+4,255,c);pp(x+13,y+5,255,c);pp(x+13,y+6,255,c);pp(x+13,y+7,255,c);pp(x+13,y+8,255,c);pp(x+13,y+9,255,c);pp(x+13,y+10,255,c);pp(x+13,y+11,255,c);pp(x+13,y+12,255,c);pp(x+13,y+13,255,c);pp(x+13,y+14,255,c);pp(x+13,y+15,118,c);pp(x+14,y+2,128,c);pp(x+14,y+3,241,c);pp(x+14,y+4,255,c);pp(x+14,y+5,255,c);pp(x+14,y+6,255,c);pp(x+14,y+7,255,c);pp(x+14,y+8,255,c);pp(x+14,y+9,255,c);pp(x+14,y+10,255,c);pp(x+14,y+11,255,c);pp(x+14,y+12,241,c);pp(x+14,y+13,255,c);pp(x+14,y+14,255,c);pp(x+14,y+15,255,c);pp(x+15,y+3,50,c);pp(x+15,y+4,171,c);pp(x+15,y+5,214,c);pp(x+15,y+6,219,c);pp(x+15,y+7,219,c);pp(x+15,y+8,219,c);pp(x+15,y+9,219,c);pp(x+15,y+10,213,c);pp(x+15,y+11,167,c);pp(x+15,y+12,22,c);pp(x+15,y+13,255,c);pp(x+15,y+14,231,c);pp(x+15,y+15,161,c);return 17;
}


typedef int (*fs_ptr_t)( int, int, int );

enum { fs_size = 69 };
int fs_chars[fs_size] = {81};
fs_ptr_t fs_ptr[fs_size] = {&fs_ch81};

int fs_print(wchar_t *str, int x, int y, int color, int maxWidth) {
	int len = wcslen ( str );
	if (len > 300) {
		return -1;
	}
	int i = 0, k = 0, offsetX = x, offsetY = y;
	for (i = 0; i < len; i++) {
		wchar_t c = str[i];
		for (k = 0; k < fs_size; k++) {
			if (fs_chars[k] == c) {
				offsetX += fs_ptr[k](offsetX, offsetY, color);
			}
		}
	}
}