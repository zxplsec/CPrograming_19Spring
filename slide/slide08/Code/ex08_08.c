/* menuette.c -- menu techniques */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
char get_choice(void);
char get_first(void);
float get_float(void);


int main(void)
{
  int choice;
  float a, b;
  
  while ( (choice = get_choice()) != 'q') {
    printf("Enter first number: ");
    a = get_float();
    printf("Enter second number: ");
    b = get_float();
    switch (choice)
    {
      case '+' :
        printf("%.2f + %.2f = %.2f.\n", a, b, a+b);
        break;
      case '-' :
        printf("%.2f - %.2f = %.2f.\n", a, b, a-b);
        break;
      case '*' :
        printf("%.2f * %.2f = %.2f.\n", a, b, a*b);
        break;
      case '/' :
        if (fabs(b)<1e-10) {
          printf("Enter a number other than 0: ");
          b = get_float();
        }
        printf("%.2f / %.2f = %.2f.\n", a, b, a/b);
        break;
      default:
        printf("Invalid character!\n");
    }
  }
  printf("Bye.\n");
  
  return 0;
}


char get_choice(void)
{
  int ch;
  
  printf("Enter the operation of your choice:\n");
  printf("+. add         -. substract\n");
  printf("*. multiply    /. divide\n");
  printf("q. quit\n");
  
  ch = get_first();
  while( ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch!='q')
  {
    printf("Please respond with +, -, *, /, or q.\n");
    ch = get_first();
  }
  
  return ch;
}


char get_first(void)
{
  int ch;
  
  while (isspace(ch = getchar()))
    continue;

  while (getchar() != '\n')
    continue;
  
  return ch;
}

float get_float(void)
{
  float input;
  char ch;
  
  while (scanf("%f", &input) != 1)
  {
    while ((ch = getchar()) != '\n')
      putchar(ch); // dispose of bad input
    printf(" is not a number.\n");
    printf("Please enter a number,\n");
    printf("such as 2.5, -1.78E8, or 3: ");
  }
  
  return input;
}