// file2screen.c:
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
  FILE * fp;
  int ch;

  if (argc != 2) {
    printf("Usage: %s filename\n", argv[0]);
    exit(1);
  }
  
  if ((fp = fopen(argv[1], "r")) == NULL) {
    printf("Can't open %s\n", argv[1]);
    exit(1);
  }

  while ((ch = fgetc(fp)) != EOF) {
    putchar(ch); // same as putchar(ch);
  }

  return 0;
}
