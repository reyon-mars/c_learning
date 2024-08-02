#include<stdio.h>
int main( void ){
	int guess;
	while( scanf(" %d ", &guess) != EOF ){
		if( guess == 42 ){
			printf(" Correct guess ");
			break;
		}
		else if( guess < 42 ){
			printf(" Too low try again ");
		}
		else printf(" Too high try again ");
	}
	return 0;
}
