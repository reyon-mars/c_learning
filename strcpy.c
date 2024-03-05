#include<stdio.h>
#include<string.h>

int main(void){
  char * name= "Roni Rana";
  int length = strlen(name);
  char name1[length];
  strcpy(name1,name);
  printf("%s\n",name);
  printf("%s\n",name1);
  return 0;
}

