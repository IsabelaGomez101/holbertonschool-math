#include "holberton.h"
#include <math.h>

/**
 * multiplication - function the multiplication operation to complex numbers
 * @c1: complex number 1.
 * @c2: complex number 2.
 * @c3: pointer complex number.
 * Return: void.
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	complex c4;

c4.re = ((c1.re) * (c2.re)) - ((c1.im) * (c2.im));
c4.im = ((c1.re) * (c2.im)) + ((c1.im) * (c2.re));

*c3 = c4;
}
