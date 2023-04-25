#include "main.h"

/**
 * print_last_digit - print the last digit
 * @d: input variable
 * Return: Return a value
 */

int print_last_digit(int d)
{
	d = d % 10;

	if (d < 0)
		d *= -1;

	_putchar(d + '0');
	return (d);
}
