// more_data.c 
#include <stdio.h>
#define SIZE 4

int main(void)
{
  int more_data[SIZE] = {11, 12, 13, 14, 15};
  int i;
  
  printf("%2s%14s\n", "i", "more_data[i]");
  for (i = 0; i < SIZE; i++)
    printf("%2d%14d\n", i, more_data[i]);
  
  return 0;
}
