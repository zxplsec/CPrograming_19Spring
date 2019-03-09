// addemup.c: 
#include <stdio.h>
int main(void)  // find sum of first 20 integers
{
  int count, sum;     //declaration statement  
  count = 0;          //assignment statement
  sum = 0;
  while (count++ < 20)  //while statement
    sum = sum + count;  
  printf("sum = %d\n", sum); //function statement                            
  return 0;
}
