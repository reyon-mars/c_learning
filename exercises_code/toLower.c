#include<stdio.h>

char toLower( char character ){
	character += ( character <= 'Z' || character >= 'A' ) * 32  || ( character > 'Z' || character < 'A') * 0;
	return character;
}

int main( void )
{
	int c ;
	while( (c = getchar()) != EOF ){
		c = toLower(c);
		putchar(c);
	}
	return 0;
}
