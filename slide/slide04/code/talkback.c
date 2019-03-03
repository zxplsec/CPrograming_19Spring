#include <stdio.h>
#include <string.h>
// density of human body: 1.04e3 kg / m^3
#define DENSITY 1.04e3
int main(void)
{
  float weight, volume;
  int size, letters;
  char name[40];
  printf("Hi! What's your first name?\n");
  scanf("%s", name);
  printf("%s, what's your weight in kilograms?\n", name);
  scanf("%f", &weight);
  size = sizeof name;
  letters = strlen(name);
  volume = weight / DENSITY;
  printf("Well, %s, your volume is %2.2f cubic meters.\n", name, volume);
  printf("Also, your first name has %d letters,\n", letters);
  printf("and we have %d bytes to store in it.\n", size);
  return 0;  
}
