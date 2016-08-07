#include <stdio.h>

// signed char -128...127
// unsigned char 0...255

// signed short -32 768...32 767
// unsigned short 0...65 535

void main(void){
	signed short first = 32000;
	unsigned short second = 65535;
	signed short third = -32768;
	
	printf("%d\n",first );
	printf("%d\n",second);
	printf("%d\n",third);
}
