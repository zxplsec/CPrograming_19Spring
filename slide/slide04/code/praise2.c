#include <stdio.h>
#include <string.h>
#define PRAISE "What's a super marvelous name!"
int main(void)
{
  char name[40];
  printf("What's your name?\n");
  scanf("%s", name);
  printf("Hello, %s. %s\n", name, PRAISE);
  printf("Your name of %ld letters occupises %ld memory cells.\n", strlen(name), sizeof name);
  printf("PRAISE has %ld letters and occupies %ld memory cells.\n", strlen(PRAISE), sizeof PRAISE);
  return 0;
}
