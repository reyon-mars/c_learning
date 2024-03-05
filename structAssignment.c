#include<stdio.h>

struct MyStruct {
  int id;
  char * name;
  char * lastname;
};

int main(void){
  struct MyStruct first={
    1,
    "roni",
    "rana"
  };
  struct MyStruct second;
  second = first;
  printf("%s\n",first.name);
  printf("%s\n",first.lastname);
  printf("%s\n",second.name);
  printf("%s\n",second.lastname);
}
