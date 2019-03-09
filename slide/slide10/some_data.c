// some_data.c: 
#include <stdio.h>
#define SIZE 6
int main(void)
{
  int some_data[SIZE] = {11, 12};
  int i;  
  printf("%2s%14s\n", "i", "no_data[i]");
  for (i = 0; i < SIZE; i++)
    printf("%2d%14d\n", i, some_data[i]);  
  return 0;
}
