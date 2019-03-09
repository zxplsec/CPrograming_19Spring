#include <stdio.h>
#define MAX(a,b) ((a) > (b) ? (a) : (b))
int main(void)
{  
  printf("max(1, 2) = %d\n", MAX(1, 2));
  printf("1.0 + max(1.1+2.2, 3.0) = %.2f\n", 1.0 + MAX(1.1+2.2, 3.0));
  return 0;
}
