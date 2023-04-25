#include "main.h"

/**
 * main - print the alphabet
 * Return: Return 0
 */

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('a');
	_putchar(r + '0');
	return (0);
}
