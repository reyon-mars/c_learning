#include<stdio.h>

#define DECI 10

int main (void)
{
  int array[4];
  array[0]=0;
  array[1]=1;
  array[2]=2;
  array[3]=3;

  int array1[DECI]={[DECI-5]=5,4,6,4};
  
  for(int j=0; j<DECI; j++){
    printf("%d \t\n",array1[j]);
   }

  for(int i=0 ; i <4; i++){
    printf("%d\n", array[i]);
  }

  return 0;

}
