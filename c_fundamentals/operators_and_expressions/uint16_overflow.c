#include <stdint.h>
#include <stdio.h>

int main( void ){
	int16_t max = 32767;
	
	max += 1;
	printf( "%d", max );
	return 0;
}
