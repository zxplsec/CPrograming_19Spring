// comma3.c:
#include<stdio.h>
int main()
{
  int x = 10, y;  
  // The following is equavalent to y = x++
  y = (x++, printf("x = %d\n", x),
       ++x, printf("x = %d\n", x),
       x++);  
  // Note that last expression is evaluated
  // but side effect is not updated to y
  printf("y = %d\n", y);
  printf("x = %d\n", x);    
  return 0;
}
