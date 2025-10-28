#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char name[64];
  double gpa;
} student;

int main(void)
{
  student student1 = {"Roni Rana", 4.00};
  student student2 = {"Reyon Rai", 3.00};
  student student3 = {"Yoo Win ", 4.00};
  student student4 = {"Yesmin Gurung", 4.00};

  student students[] = {student1, student2, student3, student4};
  // struct student students[]={student1,student2,student3, student4};

  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
  {
    printf("%s\n", students[i].name);

    printf("%.2lf\n", students[i].gpa);
  }
}
