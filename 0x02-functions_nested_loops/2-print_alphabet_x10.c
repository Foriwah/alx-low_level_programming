#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: Returns 0
 */

void print_alphabet_x10(void)
{
	int i;
	char ac;

	for (i = 1; i <= 10; i++)
	{
		for (ac = 'a'; ac <= 'z'; ac++)
			_putchar(ac);
	_putchar('\n');
	}
}
