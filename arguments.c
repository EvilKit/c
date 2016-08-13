#include <stdio.h>

short total(short a, short b)
{
  return a*b;
}
short sub(short a, short b)
{
  return a-b;
}

void main(void)
{
  printf("\n%i\n", total(2,3));
  printf("%i\n", total(23,8));
  short a=48;
  short b=2;
  printf("%i\n\n", sub(a,b));
  return;
}
