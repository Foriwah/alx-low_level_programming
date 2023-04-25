#include "main.h"

/**
 * times_table - print the nine times table
 * Return: return 0
 */

void times_table(void)
{
	int i;
	int j;
	int value;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			value = i * j;
			if (value <= 9)
				_putchar(' ');
			else
				_putchar((value / 10) + '0');

			_putchar((value % 10) + '0');

		}
		_putchar('\n');
	}
}
