#include "holberton.h"

/**
 * display_complex_number - function that displays the complex numbers.
 * @c: number complex.
 * Return: void.
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
	printf("%.0f\n", c.re);
	else
	printf("%.0f + %.0fi\n", c.re, c.im);
}