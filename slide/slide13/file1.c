#include <stdio.h>
int n = 10;
static int n1 = 20;

void print(void)
{
  int i;
  
  for (i = 0; i < n; i++)
    printf("%3d ", i);
  putchar('\n');
}
