#include <stdio.h>
#include "main.h"

/**
 * set_bit - set a bit
 * @n: the value
 * @index: the index to set
 * Return: return an int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | 1ul << index;
	return (1);
}
