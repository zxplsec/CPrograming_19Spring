// zeno.c: 
#include <stdio.h>
int main(void)
{
  int count, limit;
  double sum, x;  
  printf("Enter the number of terms: ");
  scanf("%d", &limit);
  for (sum = 0., x = 1, count = 1;
       count <= limit;
       count++, x *= 2.) {
    sum += 1.0/x;
    printf("sum = %f when terms = %d.\n", 
	   sum, count);
  }  
  return 0;
}
