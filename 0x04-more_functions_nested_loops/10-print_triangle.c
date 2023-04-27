#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= size; k++)
			{
				_putchar('#');
				if (k == i)
					break;
			}
			_putchar('\n');
		}
	}
}
