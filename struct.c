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
  struct MyStruct Amor={1,"roni rana ", "magar", 19};
  struct MyStruct crush={
    .number=1,
    .lastname="magar",
    .age=19,
    .name="roni rana",
  };
  struct MyStruct  student1;
  student1.age=20;
  strcpy(student1.name,"Roni Rana Magar");
  printf("%s\n",student1.name);
  printf("%s\n",Amor.name);
  printf("%s\n",crush.lastname);

  return 0;
}
