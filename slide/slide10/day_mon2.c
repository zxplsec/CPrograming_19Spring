#include <stdio.h>
#define MONTHS 12
int main(void)
{
  int i;
  const int days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};  
  for (i = 0; i < sizeof days/sizeof days[0]; i++)
    printf("Month %2d has %2d days.\n",
           i+1, days[i]);  
  return 0;
}

