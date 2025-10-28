#include<stdio.h>
#define MAXLINE 1000

int get_line( char* s, int lim )
{
	int c, i;
	for( i = 0; i < lim - 1 && ( c = getchar() ) != EOF && c != '\n';  ++i ){
		s[i] = c;
		};
	if( c == '\n' ){ 
		s[i]  = c;
		i++;
	}
	s[i] = '\0';
	return (i);
}

void copy( char * s1, char * s2 )
{
	int i;
	while( s1[i] = s2[i] != '\0' )
		i++;
}
	
int main( void )
{
	int len; 
	int max;
	char line[MAXLINE];
	char save[MAXLINE];
	
	max = 0;
	while( (len = get_line( line, MAXLINE)) > 0 ){
		if( len > max ){
			max = len; 
			copy( line, save );
		}
	}
	if ( max > 0 ){
		printf( " %s ", save );
	}
	return 0;
}

