// lethead2.c 
#include <stdio.h>
#include <string.h>
#define NAME "Wuhan University"
#define ADDRESS "299 Bayi Road, Wuchang District,"
#define PLACE "Wuhan, PR China 430072" 
#define WIDTH 40
#define SPACE ' '
void show_n_char(char ch, int num);

int main(void)
{
  int spaces;  
  show_n_char('*', WIDTH);
  putchar('\n');  
  show_n_char(SPACE, 12);     /* use a constant as arguments */
  printf("%s\n", NAME);  
  spaces = (WIDTH - strlen(ADDRESS))/2;
  show_n_char(SPACE, spaces); /* use a variable as argument */
  printf("%s\n", ADDRESS);  
  show_n_char(SPACE, (WIDTH - strlen(PLACE))/2); /* use an expression as argument */
  printf("%s\n", PLACE);  
  show_n_char('*', WIDTH);
  putchar('\n');  
  return 0;
}

/* show_n_char() definition */
void show_n_char(char ch, int num)
{
  int count;
  for (count = 1; count <= num; count++)
    putchar(ch);
}
