#include<stdio.h>

void increment(int * a);

int main(void)
{
  int i=2;

  increment(&i);
  printf("%d\n",i);
  
  return 0;
}
void increment(int * a)
{
  *a+=1;
}

