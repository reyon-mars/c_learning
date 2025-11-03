#include<stdio.h>

int MaximumNumber(int * array, int size)
{
  int max = *(array+0);

  for (int i=1; i<size; i++) 
  {
    if(*(array+i) > max)
    {
      max = *(array+i);
    }
  }
  return max;
}

int main(void)
{
  
  int array[10]={1,43,5,23,5,64,74,45,23,67};
  int size= sizeof(array)/sizeof(int);

  printf("%d\n",MaximumNumber(array,size));
  
  return 0;
}
