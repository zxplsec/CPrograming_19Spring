// int_info.c
#include<stdio.h>
#include<limits.h>
int main(void) 
{    
  printf("range of int is %d ~ %d\n", INT_MIN, INT_MAX);
  printf("sizeof int = %lu bytes\n", sizeof(int));   
  return 0;
}
