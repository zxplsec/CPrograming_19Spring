// pnt_add.c -- pointer addition
#include <stdio.h>
#define SIZE 4
int main(void)
{
  short dates [SIZE];
  short * pti;
  short index;
  double bills[SIZE];
  double *ptf;
  
  pti = dates; // assign address of array to pointer
  ptf = bills;
  printf("%23s %14s\n", "short", "double");
  
  for (index = 0; index < SIZE; index ++)
    printf("pointers + %d: %14p %14p\n",
           index, pti + index, ptf + index);
  
  return 0;
}
