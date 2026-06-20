#include <stdio.h>

typedef union 
{
    unsigned int bits;
    float f;
} float_bits;

void print_bits( float_bits f_b )
{
    unsigned int temp = f_b.bits;
    
    int total_bits = sizeof( temp ) * 8;

    for( int i = total_bits  - 1; i >= 0; --i )
    {
        int bit = ( temp >> i ) & 1;

        printf("%d", bit );

        if( i % 8 == 0 ){
            printf(" ");
        }
    }
    printf("\n");
}

int main( void )
{
    float_bits f = {.f = 1.0f };
    print_bits( f );

    f.f = 0.1f;
    print_bits(f);

    return 0;
}