#include<stdio.h>

int mystrlen(char * s)
{
  char *p = s;
  while(*p!='\0')
    p++;

  return p-s;
}
int main(void){
  char * name="roni rana magar";
  printf("%d",mystrlen(name));
  return 0;
}
