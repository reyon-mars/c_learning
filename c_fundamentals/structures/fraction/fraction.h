#ifndef FRACTION_H
#define FRACTION_H

#include <stdio.h>
#include <stdint.h>

typedef struct {
	int numerator;
	int denominator;
} fraction_t;

fraction_t add( const fraction_t* a, const fraction_t* b );
fraction_t substract( const fraction_t* a, const fraction_t* b );
fraction_t multiply( const fraction_t* a, const fraction_t* b );
fraction_t divide( const fraction_t* a, const fraction_t* b );

void print_fraction( void );
fraction_t* normalize( fraction_t* frac );

#endif

