#include<stdio.h>

////**************////
typedef int number, num, no;
typedef int integer, negativeInteger ,positiveInteger;
typedef char character;
typedef int byte[8];
typedef char name[50];
////**************////

struct animal{
  character * name;
  int weight;
};
typedef struct animal animal;

////**************////
typedef struct person{
  char * name;
  int age;
} person;
////**************////

////**************////
//anonymous struct//
typedef struct{
  char name[50];
  char password[100];
  int age;
} user;
////**************////


int main(void)
{

  number number1=34;
  num num1=34;
  no no1=24;
  integer integer1=255;
  negativeInteger negativeInt=-24;
  positiveInteger positiveInt= 34;
  character character1='f';
  printf("%d, %d, %d,  %c\n",number1, num1, no1, character1);
  printf("%d, %d, %d,\n",integer1, negativeInt, positiveInt);
  person  person1 = {"roni",19};
  printf("%s,%d\n",person1.name,person1.age);

  user user1={
    "roni",
    "roni",
    19
  };
  printf("%s, %s, %d\n",user1.name,user1.password,user1.age);

  animal tiger;
  tiger.name="tiger";
  tiger.weight=255;

  printf("%s, %d\n",tiger.name,tiger.weight);

  byte byte1 ={0,1,0,1,0,1,0};
  for (int i=0; i < sizeof(byte1)/sizeof(byte1[0]);i++) {
    printf("%d\t",byte1[i]);
  }
  return 0;
}
