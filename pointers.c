#include <stdio.h>

void main(void)
{
	char first=1;
	char second=2;
	char third=3;

	char* firstP=NULL;
	char* secondP=NULL;
	char* thirdP=NULL;

	firstP=&first;
	secondP=&second;
	thirdP=&third;

	printf("\nFirst variable:%d\n", first);
	printf("Second variable:%d\n", second);
	printf("Third variable:%d\n", third);

	printf("\nFirst address:%p\n",firstP);
	printf("Second address:%p\n",secondP);
	printf("Third address:%p\n",thirdP);

	*firstP=10;
	*secondP=20;
	*thirdP=30;

        printf("\nFirst variable:%d\n", first);
        printf("Second variable:%d\n", second);
        printf("Third variable:%d\n\n", third);

}


