#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
void save(void);

struct stu_type
{
  char name[20];
  int num;
  int age;
  char addr[15];
} stu[SIZE];

int main(void)
{
  int i;
  FILE * fp;
  printf("sizeof(structstud)=%d\n", (int) sizeof(struct stu_type));
  printf("Please input the 4 student information, "
	 "including name, num, age, address\n");
  for(i = 0; i < SIZE; i++)
    scanf("%s%d%d%s", stu[i].name, &stu[i].num,
          &stu[i].age, stu[i].addr);
  save();
  printf("\nThe information of the 4 students is:\n");
  fp = fopen("stu_list.txt","rb");
  
  fread(stu, sizeof(struct stu_type), SIZE, fp);
  for(i = 0; i < SIZE; i++)
  {
//    fread(&stu[i], sizeof(struct stu_type), 1, fp);
    printf("%-10s%4d%4d%15s\n", stu[i].name, stu[i].num,
           stu[i].age, stu[i].addr);
  }  
  fclose(fp);
  
  return 0;
}

void save(void)
{
  FILE * fp;
  int i;
  
  if ((fp = fopen("stu_list.txt", "wb")) == NULL) {
    printf("Cannot open file!\n");
    exit(1);
  }  
  for (i = 0; i < SIZE; i++) {
    if (fwrite(&stu[i], sizeof(struct stu_type), 1, fp) != 1)
      printf("file write error.\n");
  }
  fclose(fp);
  
}
