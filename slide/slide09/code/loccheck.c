/* loccheck.c -- checks to see where variables are stored */
#include <stdio.h>
void func(int);
int main(void)
{
  int var1 = 2, var2 = 5; // local to main()
  printf("main(): var1 = %2d, &var1 = %p\n",
         var1, &var1);
  printf("main(): var2 = %2d, &var2 = %p\n",
         var2, &var2);
  func(var2);
  return 0;
}

void func(int var2)
{
  int var1 = 10; // local to func()  
  printf("func(): var1 = %2d, &var1 = %p\n",
         var1, &var1);
  printf("func(): var2 = %2d, &var2 = %p\n",
         var2, &var2);
}