#include "holberton.h"
#include <math.h>

/**
 * substraction -  function that performs the substraction.
 * @c1: complex number 1.
 * @c2: complex number 2.
 * @c3: pointer complex number.
 * Return: void.
 */

void substraction(complex c1, complex c2, complex *c3)
{
	complex c4;

c4.re = (c1.re) - (c2.re);
c4.im = (c1.im) - (c2.im);

*c3 = c4;
}
