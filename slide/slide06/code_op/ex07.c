// ex07.c
#include<stdio.h>
int main(void)
{
  float a, b;
  puts("Enter the first pair of float numbers: ");
  while(scanf("%f %f", &a, &b) == 2) {
    printf("%8.3f %8.3f\n", a-b, a*b);
    puts("Enter the next pair of float number: ");
  }
  puts("Done!");
  return 0;
}
