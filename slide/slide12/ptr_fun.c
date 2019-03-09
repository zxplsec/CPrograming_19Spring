#include <stdio.h>
#include <stdlib.h>
int * f(int a, int b);       
int main(void)  
{        
  int * p1 = NULL;
  printf("The memeory address of p1 = %p \n", p1);        
  p1 = f(1, 2);   
  printf("The memeory address of p1 = %p \n", p1);  
  printf("*p1 = %d \n", *p1);  
  return 0;  
}  

int * f(int a, int b) {  
  int * p = (int *)malloc(sizeof(int));  

  printf("The memeory address of p = %p \n", p);  
  *p = a + b;  
  printf("*p = %d \n", *p);  
  
  return p;  
} 
