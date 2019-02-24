// bases.c: print 100 in decimal, octal and hex
#include <stdio.h>
int main(void)
{
  int x = 100;
  printf("dec = %d; oct = %o; hex = %X\n", x, x, x);
  printf("dec = %d; oct = %#o; hex = %#X\n", x, x, x);
  return 0;
}
