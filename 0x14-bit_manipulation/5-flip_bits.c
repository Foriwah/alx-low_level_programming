#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip the bits
 * @n: old value
 * @m: new value
 * Return: return a value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		if (xor & 1ul)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
