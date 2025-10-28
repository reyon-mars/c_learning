#include<stdio.h>
int main(void){

  char name[]="roni rana";
  char * name1;
  name1 = name;
  printf("%s\n",name1);
  name1[4]='-';
  printf("%s\n",name);
  printf("%s\n",name1);
  return 0;
}
