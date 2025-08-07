#include<stdio.h>

int factorial(int n){
    return n*factorial(n-1);
}
int main(void){
    printf("%d",factorial(7));
    return 0;
}

