#include "holberton.h"
#include <math.h>

/**
 * division - function the multiplication operation to complex numbers
 * @c1: complex number 1.
 * @c2: complex number 2.
 * @c3: pointer complex number.
 * Return: void.
 */

void division(complex c1, complex c2, complex *c3)
{
	double exp = 2;
	double x = pow(c2.re, exp);
	double y = pow(c2.im, exp);
	complex c4;

c4.re = (((c1.re) * (c2.re)) + ((c1.im) * (c2.im))) / ((x) + (y));
c4.im = (((c1.im) * (c2.re)) - ((c1.re) * (c2.im))) / ((x) + (y));

*c3 = c4;
}
