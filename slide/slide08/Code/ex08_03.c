/* menuette.c -- menu techniques */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;
  int n_upper = 0;
  int n_lower = 0;
  
  while ( (ch = getchar()) != EOF)
  {
    if (isupper(ch))
      n_upper++;
    if (islower(ch))
      n_lower++;
  }
  printf("In this char flow, there are %d capital letters, %d small letters.\n",
         n_upper, n_lower);
  
  return 0;
}
