#include<stdio.h>
#include<string.h>

struct MyStruct {
  int number;
  char name[50];
  char lastname[50];
  int age;
};


int main()

{
  struct MyStruct  student1;
  student1.age=20;
   strcpy(student1.name,"Roni Rana Magar");


  printf("%s",student1.name);


  return 0;
}
