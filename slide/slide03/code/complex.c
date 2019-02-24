#include <stdio.h>
#include <complex.h>
int main(void)
{
  double complex a = 1 + 1I;
  printf("a = (%.2f, %.2f)\n", creal(a), cimag(a));
  double complex b = conj(a);
  printf("b = (%.2f, %.2f)\n", creal(b), cimag(b));
  printf("arg = %.5f\n", carg(a));
  printf("abs = %.5f\n", cabs(a));
  return 0;
}
  
