// ex04.c: 
#include<stdio.h>
int main(void)
{
  char ch;
  int count = 0;
  while((ch = getchar()) != '#') {
    if (ch == '.') {
      count++; putchar('!'); 
    } else if (ch == '!') {
      count++; putchar('!'); putchar('!');
    } else
      putchar(ch);
  }
  return 0;
}
