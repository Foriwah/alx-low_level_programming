#include <stdio.h>
#include "main.h"

/**
 * get_bit - bit at given index
 * @n: the number
 * @index: the index
 * Return: return the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 63)
		return (-1);
	num = 1 << index;
	return ((n & num) > 0);
	
}
