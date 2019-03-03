#include <stdio.h>
int main(void)
{
  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  printf("Greeting message: ");
  printf("%s\n", greeting);
  return 0;
}
