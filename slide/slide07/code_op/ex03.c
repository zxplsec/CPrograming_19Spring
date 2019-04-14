// ex03.c: 
#include<stdio.h>
int main(void)
{
  int num;
  int n_even = 0, n_odd = 0, sum_even = 0, sum_odd = 0;
  puts("Enter some integers (0 to quit)");
  while ( (scanf("%d", &num) == 1) && num !=0 ) {
    switch (num % 2) {
    case 0: n_even++; sum_even += num; break;
    case 1: n_odd++;  sum_odd  += num; break;
    default: break;
    }
  }
  printf("number of even integer is %4d, and average is %8.3f\n", 
         n_even, (double) sum_even / n_even);
  printf("number of odd  integer is %4d, and average is %8.3f\n", 
         n_odd,  (double) sum_odd  / n_odd );
  return 0;
}
