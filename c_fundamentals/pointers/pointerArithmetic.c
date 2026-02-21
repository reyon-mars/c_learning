#include<stdio.h>

int main(void)
{
  int a[5] ={1,2,3,5,6};
  for(int i=0; i<5; i++)
  printf("%d\n",a[i]);

  int b[5] ={1,2,3,5,6};
  int* p=&a[0];

  for(int i=0; i<5; i++)
  printf("%d\n",(*p)++);

  for(int i=0; i<5; i++)
  printf("%d\n",*p++);
  
  for(int i=0; i<5; i++)
  printf("%d\n",*(p+i));

  return 0;

}
