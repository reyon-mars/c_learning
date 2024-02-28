#include<stdlib.h>
#include <stdio.h>


#define pi 3.14159265

double area(int radius);

int main (int argc , char *argv[])
{
  double radius= atof(argv[1]);

   double area_1= area(radius);
  printf("%lf",area_1);
  return 0;
}

double area(int radius)
{
  return pi * radius * radius ;
}


