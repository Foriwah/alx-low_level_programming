#include <stdio.h>
#include "main.h"

/**
 * print_binary - bring the binary
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	char c = '0';
	unsigned long int num = 1ul << 63;

	while (!(num & n) && num != 0)
		num = num >> 1;
	if (num == 0)
		_putchar(c);
	while (num > 0)
	{
		if (num & n)
			c = '1';
		else
			c = '0';
		_putchar(c);
		num = num >> 1;
	}
}
