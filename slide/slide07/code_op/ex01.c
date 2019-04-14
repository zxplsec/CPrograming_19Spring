// ex01.c: 
#include<stdio.h>
#define SPACE ' '
#define NEWLINE '\n'
#define STOP EOF
int main(void)
{
  char ch;
  int n_space=0, n_newline=0, n_other=0;
  while((ch = getchar()) != STOP) {
    switch (ch) {
    case SPACE:   n_space++;   break;
    case NEWLINE: n_newline++; break;
    default:      n_other++;   break;
    }
  }
  printf("Number of space is %d\n", n_space);
  printf("Number of newline is %d\n", n_newline);
  printf("Number of other characters is %d\n", n_other);
  return 0;
}
