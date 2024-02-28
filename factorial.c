#include<stdio.h>

int factorial(int n){
  
  if(n!=0){
    return n * factorial(n-1);
  }
  
  else { 
    return 1;
  }

}

int main(void){

  int userInput;
  printf("Please enter a number: ");
  scanf("%d",&userInput);
  printf("The value of %d! is %d",userInput,factorial(userInput));

  return 0;

}
