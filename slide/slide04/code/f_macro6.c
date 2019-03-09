#include <stdio.h>
#define X(n) x##n
#define PXN(n) printf("x"#n" = %d\n", x##n);
int main(void)
{
  int X(1) = 12; PXN(1);
  int X(2) = 24; PXN(2);
  int X(3) = 36; PXN(3);
  return 0;
}
