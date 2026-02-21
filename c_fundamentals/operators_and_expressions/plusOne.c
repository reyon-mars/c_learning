#include<stdio.h>

int plusOne(int n);

int main(void)
{
  int i = 10, j;
  j=plusOne(i);
  printf("%d",j);

  return 0;
}
int plusOne(int n)
{
  return n+1;
}
