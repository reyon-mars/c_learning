#include <stdio.h>
#include <inttypes.h>

unsigned int count_set_bits( uint32_t num )
{
	unsigned int setbit_count = 0;

	while( num )
	{
		setbit_count++;
		num &= ( num - 1 );
	}
	return setbit_count;
}

int main( void )
{
	int input = 0;
	puts(" Please enter a number: " );
	scanf("%d", &input );

	printf("%d", count_set_bits( input ) );
	return 0;
}
