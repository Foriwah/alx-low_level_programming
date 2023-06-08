#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary to an unsigned int
 * @b: the string of binary
 * Return: Return 0 or unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value;

	if (b == NULL)
		return (0);
	for (value = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			value = value << 1;
		}
		else if (*b == '1')
		{
			value = value << 1;
		}
		else
		{
			return (0);
		}
	}
	return (value);
}
