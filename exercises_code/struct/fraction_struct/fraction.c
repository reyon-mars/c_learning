#include <fraction.h>

fraction_t multiply( const fraction_t* const a, const fraction_t* const b ){
	fraction_t result;
	result.numerator = a->numerator * b->numerator;
	result.denominator = a->denominator * b->denominator;
	return result;
}

fraction_t divide( const fraction_t* const a , const fraction_t*  const b ){
	fraction_t result;
	result.numerator  = a->numerator * b->denominator;
	result.denominator = a->denominator * b-> numerator;
	return result;
}

fraction_t add( const fraction_t* const a, const fraction_t* const b ){

} 
