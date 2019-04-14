// vowels.c:
#include <stdio.h>
#include <ctype.h>
int main(void)
{
  char ch;
  int na, ne, ni, no, nu;
  na = ne = ni = no = nu = 0;  
  printf("Enter some text: enter # to quit.\n");
  while ((ch = getchar()) != '#') {
    switch (toupper(ch)) {
    case 'A': na++; break;
    case 'E': ne++; break;
    case 'I': ni++; break;
    case 'O': no++; break;
    case 'U': nu++; break;
    default: break;
    }
  }
  printf("Number of text: %4c %4c %4c %4c %4c\n", 'A', 'E', 'I', 'O', 'U');
  printf("                %4d %4d %4d %4d %4d\n", na, ne, ni, no, nu);  
  return 0;
}
