#include<stdio.h>
#include<ctype.h>


double celciusToFarenhite(double temprature)
{
  return (temprature * 9/5) + 32;
}
double farenhiteToCelcius(double temprature)
{ 
  return ((temprature - 32)* 5)/9;
}

int main (void){
  printf("%lf\n",celciusToFarenhite(10));

  printf("%lf\n",farenhiteToCelcius(10));
  return 0;
}
