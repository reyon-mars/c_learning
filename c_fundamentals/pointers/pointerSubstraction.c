#include<stdio.h>

int mystrlen(char * s)
{
  char *p = s;
  while(*p!='\0')
    p++;

  return p-s;
}
int main(void){

  char name_[]="roni magar";
  char * name="roni rana magar";
  printf("%d ,%d",mystrlen(name),mystrlen(name_));
  return 0;
}
