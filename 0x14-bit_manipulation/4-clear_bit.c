#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear bit
 * @n: the value
 * @index: my index
 * Return: return an int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1ul << index);
	return (1);
}
