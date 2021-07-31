#include "holberton.h"
#include <math.h>



/**
 * modulus - function that returns the modulus of a given complex number.
 * @c: complex number.
 * Return: the modulus
 */

double modulus(complex c)
{
double exp = 2;
double x, y, m;

x = pow(c.re, exp);
y = pow(c.im, exp);
m = sqrt(x + y);

return (m);
}
