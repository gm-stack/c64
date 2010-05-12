#include <stdio.h>
#include <stdlib.h>
#include <c64.h>

int main (void)
{
	short bgc = 0;
	short screenh = 16;
	short screenw = 192;
	char *colors, *sch, *scw;
	colors=(char *)0x0286;
	sch=(char *)0xD011;
	scw=(char *)0xD016;
    while (1) {
		fputs("YOU JUST LOST THE GAME    ",stdout);
		
		if (screenw == 207) {
			screenw = 192;
			screenh++;
		}
		scw[0] = screenw;
		screenw++;
		if (screenh == 27) {
			screenh = 16;
		}
		sch[0]=screenh;
		
		bgc=(++bgc % 16);
		VIC.bgcolor0 = bgc;
		bgc=((bgc += 2) % 16);
		VIC.bordercolor = bgc;
		colors[0]=(++colors[0] % 16);
	}
}