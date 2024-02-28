#include<stdio.h>

int sum(int n){
   if (n!=0){
    return n + sum(n-1);
  }
  else {
    return n;
  }
}

int main(void){
  printf("%d",sum(100));
  return 0;

}
