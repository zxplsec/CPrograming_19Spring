// designate_init.c 
#include <stdio.h>
#define MONTHS 12
int main(void)
{
  int arr[6] = {[5] = 212};
  int i;
  
  for (i = 0; i < 6; i++)
    printf("arr[%d] = %d.\n",
           i, arr[i]);
  
  return 0;
}
