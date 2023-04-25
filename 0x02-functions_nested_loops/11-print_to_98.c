#include "main.h"

/**
 * print_to_98 - print natural numbers
 * @n: input variable
 * Return: Return 0
 */

void print_to_98(int n)
{
	int a;
	int b;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			_putchar(a + '0');
			if (a == 98)
				continue;
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	else
	{
		for (b = n; b <= 98; b++)
		{
			_putchar(b + '0');
			if (b == 98)
				continue;
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
