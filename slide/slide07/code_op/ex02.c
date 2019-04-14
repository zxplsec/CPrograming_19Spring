// ex02.c: 
#include<stdio.h>
#define COL 8
#define STOP '#'
int main(void)
{
  char ch;
  int count=0;
  puts("Enter some texts:");
  while((ch = getchar()) != STOP) {
    printf("%c:%3d    ", ch, ch);
    if(++count % COL == 0)
      putchar('\n');
  }	
  return 0;
}
