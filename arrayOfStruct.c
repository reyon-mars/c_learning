#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char name[50];
  double gpa;
} student;

int main(void)
{
  student student1 = {"Roni Rana", 4.00};
  student student2 = {"Reyon Rai", 3.00};
  student student3 = {"Yoo Win ", 4.00};

  student students[] = {student1, student2, student3};
  // struct student students[]={student1,student2,student3};

  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
  {
    printf("%s\n", students[i].name);

    printf("%.2lf\n", students[i].gpa);
  }
}
