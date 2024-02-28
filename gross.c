#include<stdio.h>
float gross(float salary);
int main()
{

  float salary1=gross(100);
  printf("%f",salary1);
}
float gross(float salary)
{
  return (salary*160)/100;
}
