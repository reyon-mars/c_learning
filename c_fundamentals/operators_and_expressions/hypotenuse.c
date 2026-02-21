#include<stdio.h>
#include<math.h>

double hypotenuse(double base , double height);

int  main(void)
{
  printf("%lf", hypotenuse(4,3));
  return 0;
}



double hypotenuse(double base , double height )
{
  
  double Hypotenuse= sqrt(pow(base,2)+pow(height,2));

  if(base!=0 && height!=0){
    return Hypotenuse;
  }
  else {
    return 1;
  }
}
