#include <fraction.h>
#include <stdlib.h>

static int gcd(int a, int b)
{
	while (b != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}
	return (a < 0) ? -a : a;
}

fraction_t* normalize(fraction_t *frac)
{
	if (frac->denominator == 0)
	{
		fprintf(stderr, "Error: denominator cannot be zero.\n");
		exit(EXIT_FAILURE);
	}
	int g = gcd( frac->numerator, frac->demoninator );
	frac->numerator = frac->numerator / g;
	frac->denominator = frac->denominator / g;
	if( frac->denominator )
}

fraction_t multiply(const fraction_t *const a, const fraction_t *const b)
{
	fraction_t result;
	result.numerator = a->numerator * b->numerator;
	result.denominator = a->denominator * b->denominator;
	return result;
}

fraction_t divide(const fraction_t *const a, const fraction_t *const b)
{
	fraction_t result;
	result.numerator = a->numerator * b->denominator;
	result.denominator = a->denominator * b->numerator;
	return result;
}

fraction_t add(const fraction_t *const a, const fraction_t *const b)
{
}
