#include<stdio.h>
#define pi 3.1415

int circumference(int r)
{
  return 2*pi*r;
}
int main(void)
{
  printf("%d",circumference(20));
  return 0;
}
