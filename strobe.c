#include <c64.h>

int main (void)
{
	char *colors, *scw;
	short bgc = 0;
	short bgc2 = 0;
	int i=0, j=0;
	
	colors=(char *)0x0286;
	
	scw=(char *)0xD011;
	scw[0] = bgc2;
	
    while (1) {		
		bgc=(++bgc % 16);
		VIC.bordercolor = bgc;
		i++;
		for (j=0; j<i; j++) {}
		if (i == 200) {
			i = 0;
		}
	}
}