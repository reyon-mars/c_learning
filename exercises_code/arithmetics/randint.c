#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
  srand(time(0));
  int number1 = rand();
  int number2 = rand();
  int number3 = rand();
  int number4 = rand();
  int number5 = rand();

  printf("%d, %d, %d, %d, %d",number1,number2,number3,number4,number5);
return 0;
}



