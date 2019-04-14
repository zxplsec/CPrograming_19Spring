#include <stdio.h>
double power(double x, int n);

int main(void)
{
  printf("pow = %f \n", power(2, 0));
  return 0;
}

double power(double x, int n)
{
  double pow;
  if (x == 0 && n != 0)
    return 0.0;
  else if (n == 0)
    return 1.0;
  else if (n > 0)
  {
    pow = x*power(x, n-1);
    return pow;
  }
  else
  {
    pow = x*power(x, -n-1);
    return 1./pow;
  }
}



