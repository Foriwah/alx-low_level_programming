#include "main.h"

/**
 * print_times_table - print the nine times table
 * @n: input variable
 * Return: return 0
 */

void print_times_table(int n)
{
	int i;
	int j;
	int value;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			value = i * j;
			if (value < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if ((value >= 10) && (value < 100))
			{
				_putchar(' ');
				_putchar((value / 10) + '0');
			}
			else
			{
				_putchar((value / 100) + '0');
				_putchar(((value / 10) % 10) + '0');
			}
			_putchar((value % 10) + '0');
		}
	_putchar('\n');
	}
}
