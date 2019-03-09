// strings.c: 
#include <stdio.h>
#define WORD "Hello World!"
int main(void)
{
  printf("*%2s*\n", WORD);
  printf("*%15s*\n", WORD);
  printf("*%4.5s*\n", WORD);
  printf("*%-15.5s*\n",	WORD);
  printf("*%.5s*\n",	WORD);
  return 0;
}
