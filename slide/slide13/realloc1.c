#include <stdio.h>  
#include <stdlib.h>  
  
int main(void)
{   
  char * p, * q;  
  p = (char *) malloc(10);  
  q = p;  
  p = (char *) realloc(p, 10);  
  printf("p = %p\n", p);  
  printf("q = %p\n", q);  
      
  return 0;   
}   
