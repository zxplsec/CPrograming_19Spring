#include <stdio.h>

int main(void)
{
//  char greeting[50] = "How" " are" " you?";
  char * p1 = "Klingon";
  
//  printf("%s\n", greeting);
//  printf("\"Ready, go!\" exclaimed John.\n");
  
  p1[0] = 'F';
  printf("Klingon");
  printf(": Beware the %ss!\n", "Klingon");
  
  
  return 0;
}