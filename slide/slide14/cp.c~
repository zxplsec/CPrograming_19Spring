#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
  int ch;
  FILE * fp;

  if ( (fp = fopen(argv[1], "w")) == NULL) {
    printf("Cannot access %s\n", argv[1]);
    exit(1);
  }    
  
  while( (ch = getchar() ) != '#')
    fputc(ch, fp);      
  fclose(fp);

  return 0; 
}
