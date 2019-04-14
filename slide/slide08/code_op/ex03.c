// ex03.c: 
#include <stdio.h>
#define N 10
int main(void)
{
  int i = 0;
  int num;

  printf("Please input an integer: ");
  scanf("%d", &num);
  while (i < N) 
    printf("%d\t", num+i++); 
  
  return 0;
}
