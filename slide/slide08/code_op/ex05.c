// ex05.c: 
#include <stdio.h>
int main(void)
{
  int n;
  int i = 0, sum = 0;
  printf("Please input n: ");
  scanf("%d", &n);
  while (++i <= n)
    sum += i;
  printf("1 + ... + %d = %d\n", n, sum);
  return 0;
}
