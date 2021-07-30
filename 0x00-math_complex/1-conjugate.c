#include "holberton.h"

/**
 * conjugate - function that returns the conjugate of a given complex number.
 * @c: complex number.
 * Return: complex number.
 */

complex conjugate(complex c)
{
	complex z;

	z.re = c.re;
	z.im = c.im * -1;
	return (z);
}
