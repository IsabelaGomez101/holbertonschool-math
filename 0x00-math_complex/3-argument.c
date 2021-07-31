#include "holberton.h"
#include <math.h>
#define PI 3.141592654

/**
 * argument - function that returns the argument of a given complex number.
 * @c: complex number.
 * Return: the argument
 */
double argument(complex c)
{
double result, a, b;
a = c.re;
b = c.im;

if (a == 0)
{
if (b == 0)
{
result = 0;
exit(99);
}
else if (b > 0)
{
result = (PI / 2);
exit(98);
}
else
{
result = ((3 * PI) / 2);
exit(98);
}
}
else if (a < 0 && b < 0)
{
result = atan2(b, a) - PI;
}
else if (a < 0 && b > 0)
{
result = atan2(b, a) + PI;
}
else
{
result = atan2(b, a);
}
return (result);
}
