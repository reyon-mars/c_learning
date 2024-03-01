#include<stdio.h>
int exponent(int base ,int power);

int main(void){
  printf("%d", exponent(2,7));
}

int exponent(int base ,int power)
{
  register int res=1;
  for(int i=0; i<power; i++){
    res=res*base;
  }
  return res;
}
