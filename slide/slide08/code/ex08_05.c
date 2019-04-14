/* guess.c -- an inefficient and faulty number-guesser */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int guess, lower, upper;
  char ch;
  lower = 1;
  upper = 100;
  
  printf("Pick an integer from 1 to 100. I will ");
  printf("try to guess it.\nRespond with ");
  printf("a y if my guess is right and with");
  printf("\nan n if it is wrong.\n\n");
  
  printf("Please input your initial guess: ");
  scanf("%d", &guess);
  
  printf("Uh...is your number bigger, smaller than or equal to %d?\n", guess);
  while (isspace(ch = getchar()))
    continue;
  
  while (ch != '=')
  {
    if (ch != '<' && ch != '>')
      printf("Sorry, I understand only >, < or =.\n");
    if (ch == '>')
    {
      lower = guess;
      guess = (lower+upper)/2;
    }
    if (ch == '<')
    {
      upper = guess;
      guess = (lower+upper)/2;
    }
    
    printf("Uh...is your number bigger, smaller than or equal to %d?\n",
           guess);
    while ((ch = getchar()) != '\n')
      continue;
    
    while (isspace(ch = getchar()))
      continue;
  }
  printf("I knew I could do it!\n");
  
  return 0;
}
