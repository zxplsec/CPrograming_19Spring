// lethead1.c
#include <stdio.h>
#define NAME "Wuhan University"
#define ADDRESS "299 Bayi Road, Wuchang District,"
#define PLACE "Wuhan, PR China 430072"
#define WIDTH 40
void starbar(void); /* prototype the function */
int main(void)
{
  starbar();
  printf("%s\n", NAME);
  printf("%s\n", ADDRESS);
  printf("%s\n", PLACE);
  starbar(); /* use the function */  
  return 0;
}

void starbar(void) /* define the function */
{
  int count;  
  for (count = 1; count <= WIDTH; count++)
    putchar('*');
  putchar('\n');
}
