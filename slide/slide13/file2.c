#include "file2.h"
int m;
double ar[10];
int n;
int n1;
/* void print(void); */

int main(void)
{
  extern int m;
  extern double ar[];
  int i;
  m = 1;

  
  for (i = 0; i < 10; i++)
    ar[i] = i*2.0;

  printf("n = %d, n1 = %d, m = %d\n", n, n1, m);
  /* print(); */

  return 0;
}



