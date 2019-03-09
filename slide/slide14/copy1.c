// copy.c: 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
  char ch;
  FILE * fsrc, * fdes;

  if (argc < 3) {
    printf("Usage: %s srcfile desfile\n", argv[0]);
    exit(1);
  }

  
  if ((fsrc = fopen(argv[1], "r")) == NULL ||
      (fdes = fopen(argv[2], "w")) == NULL) {
    printf("Cannot open files!\n");
    exit(1);
  }

  while ((ch = getc(fsrc)) != EOF)
    fputc(ch, fdes);
  printf("Successed copy srcfile to desfile\n");

  fclose(fsrc);
  fclose(fdes);

  return 0;
}
