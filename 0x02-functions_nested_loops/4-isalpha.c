#include "main.h"

/**
 * _isalpa - checks if an input is an alphabet
 * @c: input variable
 * Return: Returns a value
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
