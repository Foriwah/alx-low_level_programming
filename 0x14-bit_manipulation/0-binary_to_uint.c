#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary to an unsigned int
 * @b: the string of binary
 * Return: Return 0 or unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int k = 1;
	unsigned int len = 0;
	int counter;

	while (b[len] != '\0')
		len++;
	if (b == NULL)
		return (0);
	for (counter = len - 1; counter >= 0; counter--)
	{
		if (b[counter] != 48 && b[counter] != 49)
			return (0);
		if (b[counter] == 49)
		{
			value = value + k;
		}
		k = k * 2;
	}
	return (value);
}
