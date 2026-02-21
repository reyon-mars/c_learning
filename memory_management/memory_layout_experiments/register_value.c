#include <stdint.h>
#include <stdio.h>

static uint8_t register = 0x0;

#define parity_bit  0xC;

int main( void )
{
	uint8_t parity = register &  parity_bit;
	parity >>= 2;
	
	printf( "%d", parity );
	return 0;
}
