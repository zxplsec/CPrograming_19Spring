// boolean1.c: 
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
  long num;
  long sum = 0L;
  bool input_is_good;
  printf("Enter an integer to be summed");
  printf(" (q to quit):\n");  
  input_is_good = (scanf("%ld", &num) == true);
  while (input_is_good) {
    sum = sum + num;
    printf("Enter next integer (q to quit):\n");
    input_is_good = (scanf("%ld", &num) == true);
  }
  printf("Those integers sum to %ld.\n", sum);
  return 0;
}
