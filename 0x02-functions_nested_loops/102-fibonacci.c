#include "main.h"

/**
 * main - fibonacci series
 * Return: return 0
 */

int main(void)
{
	int first = 1;
	int second = 2;
	int temp;
	int i;

	_putchar(first + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(second + '0');

	for (i = 0; i < 48; i++)
	{
		_putchar(',');
		_putchar(' ');
		temp = first + second;
		_putchar(temp + '0');
		first = second;
		second = temp;
	}
	_putchar('\n');
	return (0);
}
