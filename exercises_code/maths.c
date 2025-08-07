#include<stdio.h>
#include<math.h>

int main(void)
{
  double A,B,C,D,E,G,H;
  int  F; 
  A= pow(9,2);
  B= ceil(3.14159);
  C= floor(3.14159);
  D= log(4);
  E= sqrt(16);
  F= fabs(-2000);
  G= log(16);
  H = sin(29);

  printf("%lf , %lf , %lf , %lf, %lf ,%d,%lf,%lf",A,B,C,D,E,F,G,H);

  return 0;
}


