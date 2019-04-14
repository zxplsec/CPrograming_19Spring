// ex06.c: 
#include<stdio.h>
int main(void)
{
  double a = 1.0/3.0;
  double b = 1.0f/3.0f;
  
  printf("a = %.4f, b = %.4f\n", a, b);
  printf("a = %.12f, b = %.12f\n", a, b);
  printf("a = %.16f, b = %.16f\n", a, b);

  return 0;
}
