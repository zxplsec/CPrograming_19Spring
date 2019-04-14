// swap2.c:
#include <stdio.h>
void interchange(int u, int v);

int main(void)
{
  int x = 5, y = 10;  
  printf("Originally: x = %2d, y = %2d.\n", x, y);
  interchange(x, y);
  printf("Now       : x = %2d, y = %2d.\n", x, y);  
  return 0;
}

void interchange(int u, int v)
{
  int temp;  
  printf("Originally: u = %2d, v = %2d.\n", u, v);
  temp = u;
  u = v;
  v = temp;
  printf("Now       : u = %2d, v = %2d.\n", u, v);
}
