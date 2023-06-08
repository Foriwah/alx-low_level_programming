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
	int count;
	unsigned int len = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (count = len - 1; count >= 0; count--)
	{
		if (b[count] != 49 && b[count] != 48)
			return (0);
		if (b[count] == 49)
		{
			value = value + k;
		}
		k = k * 2;
	}
	return (value);
}
