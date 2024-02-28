#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  srand(time(0));
  int answer= rand() % 1000;
  int input;
  printf("Let's test your luck !!!\n**************************\nPlease enter a number: ");

  scanf("%d",&input);

  if(input==answer){
    printf("Yay!!! you guessed it right the answer is %d.",answer);
  }
  else {
    printf("Sorry! Better luck  next time. The answer is %d.",answer);
  }
  
  return 0;


}
