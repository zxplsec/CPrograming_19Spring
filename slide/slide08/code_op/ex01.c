// ex01.c
#include<stdio.h>
int add(int x, int y);
int main(void)
{
  int x = 3, y = 4;
  printf("%d + %d = %d\n", x, y, add(x, y));
}

int add(int x, int y)
{
  return printf("%*c%*c", x, ' ', y, ' ');
}
