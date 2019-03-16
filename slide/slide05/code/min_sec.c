// min_sec.c: 
#include <stdio.h>
#define SEC_PER_MIN 60
int main(void)
{
  int sec, min, left;  
  printf("Convert secs to mins and secs!\n");
  printf("Enter the number of secs(<=0 to quit):\n");
  scanf("%d", &sec);
  while (sec>0) {
    min = sec / SEC_PER_MIN;
    left = sec % SEC_PER_MIN;
    printf("%d secs is %d mins, %d secs.\n", sec, min, left);
    printf("Enter next value (<=0 to quit):\n");
    scanf("%d", &sec);
  }
  printf("Done!\n");
  return 0;
}
