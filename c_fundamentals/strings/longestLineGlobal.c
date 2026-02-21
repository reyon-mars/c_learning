#include <stdio.h>
#define MAXLINE 1000

char line[ MAXLINE ];
char save[ MAXLINE ];
int max;


int main( void )
{
	int len;
	extern int max;
	extern char save[];
	max = 0;
	while( ( len = get_line() ) > 0 ){
		if( len > max ){
			max = len;
			copy();
		}
	}
	if( max > 0 ){
		printf(" %s ", save );
	}
}
