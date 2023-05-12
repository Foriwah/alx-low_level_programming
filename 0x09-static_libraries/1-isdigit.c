#include "main.h"

/**
 * _isdigit - checks if an input is a digit
 * @c: input
 * Return: Always 0
 */

int _isdigit(int c)
{
	int i;

	i = isdigit(c);

	if (i == 256)
		i = 1;
	return (i);
}
