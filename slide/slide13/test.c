#include<stdio.h>
int main(void)
{
  register int i = 0;

  printf("%d %p\n", i, &i);

  return 0;
}
