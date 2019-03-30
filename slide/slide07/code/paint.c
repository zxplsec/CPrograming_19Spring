// paint.c:
#include <stdio.h>
#define COVERAGE 200
int main(void)
{
  int sq_feet, cans;
  printf("Enter number of square feet to be painted:\n");
  while (scanf("%d", &sq_feet)) {
    cans = sq_feet / COVERAGE;
    cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
    printf("You need %d %s of paint.\n",
           cans, cans == 1 ? "can" : "cans");
    printf("Enter next value (q to quit):\n");
  }  
  return 0;
}