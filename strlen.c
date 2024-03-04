#include<stdio.h>
int myStrLen(char * string)
{
  int count=0;
  while( string[count]!='\0') {
    count++;
  }
  return count;
}
int main(void){
  char * name ="Roni Rana";
  printf("%d",myStrLen(name));
  return 0;
}
