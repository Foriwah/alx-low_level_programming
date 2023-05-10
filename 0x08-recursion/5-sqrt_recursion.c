#include "main.h"
#include <stdio.h>

/**
 * square - checks the input number from n to the base
 * @n: variable
 * @base: base number to check
 * Return: natural square root of number base
 */

int square(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (square(n + 1, base));
}

/**
 * _sqrt_recursion - square root of a number n.
 * @n: a variable
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	return (square(1, n));
}
