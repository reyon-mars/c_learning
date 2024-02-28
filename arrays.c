#include<stdio.h>
int main (void)
{
  int array[4];
  array[0]=0;
  array[1]=1;
  array[2]=2;
  array[3]=3;

  for(int i=0 ; i <4; i++){
    printf("%d\n", array[i]);
  }

  return 0;

}
