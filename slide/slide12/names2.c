// names2.c
#include <stdio.h>
#include <string.h>

struct namect {
  char fname[20];
  char lname[20];
  int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);

int main(void) 
{
  struct namect person;
  
  person = getinfo();
  person = makeinfo(person);
  showinfo(person);
  
  return 0;
}

struct namect getinfo(void)
{
  struct namect temp;
  
  puts("Enter your first name.");
  gets(temp.fname);
  puts("Enter your last name.");
  gets(temp.lname);
  
  return temp;
}

struct namect makeinfo(struct namect info)
{
  info.letters = (int) strlen(info.fname) +
                 (int) strlen(info.lname);
  return info;
}

void showinfo(struct namect info)
{
  printf("%s %s, your name contains %d letters.\n",
         info.fname, info.lname, info.letters);
}
