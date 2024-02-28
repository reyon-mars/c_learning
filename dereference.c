#include<stdio.h>
int  main(void)
{
  int i;
  int * p=&i;
  i=0;
  printf("%d\n",i);
  *p=20;
  printf("%d\n",i);
  return 0;
}
