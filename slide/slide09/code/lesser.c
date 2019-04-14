// lesser.c -- finds the lesser of two integers
#include <stdio.h>
int imin(int, int);
int main(void)
{
  int n1, n2;
  printf("Enter two integers (q to quit):\n");
  while (scanf("%d %d", &n1, &n2) == 2) {
    printf("The lesser of %d and %d is %d.\n",
           n1, n2, imin(n1,n2));
    printf("Enter two integers (q to quit):\n");
  }
  printf("Bye.\n");
  return 0;
}

int imin(int n,int m)
{
  int min;
  min = (n < m) ? n : m;
  return min;
}
