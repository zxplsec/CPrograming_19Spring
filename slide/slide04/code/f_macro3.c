#include <stdio.h>
#define PRINT_SQUARE(x) printf("the square of " #x " is %d.\n", (x) * (x));
int main(void)
{
  PRINT_SQUARE(3);
  PRINT_SQUARE(3+2);
  return 0;
}
