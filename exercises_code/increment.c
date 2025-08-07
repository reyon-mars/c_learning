#include<stdio.h>
void increment (int * p)
{
  *p=*p+1;
}
int main(void)
{
  int test = 20;

  int * p = &test;

  increment(p);
  
  printf("%d",test);
  return 0;
}
