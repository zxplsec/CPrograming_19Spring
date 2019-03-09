#include <stdio.h>
double power(double x, int n);

int main(void)
{
  printf("pow = %f \n", power(2.0, -2));
  return 0;
}

double power(double x, int n)
{
  double pow;
  int i;
  if (x == 0 && n != 0)
    return 0.0;
  else if (n == 0)
    return 1.0;
  else if (n > 0)
  {
    pow = 1.0;
    for (i = 0; i < n; i++) {
      pow *= x;
    }
    return pow;
  }
  else
  {
    pow = 1.0;
    for (i = 0; i < -n; i++) {
      pow /= x;
    }
    return pow;
  }
}



