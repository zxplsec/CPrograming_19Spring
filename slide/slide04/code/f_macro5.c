#include <stdio.h>
#define PRINT(a)                \
  do {                          \
    printf("%s: %d\n", #a, a);  \
    printf("%d: %d\n",  a, a);  \
  } while(0);
int main(void)
{
  PRINT(3);
  PRINT(3+2);
  return 0;
}
