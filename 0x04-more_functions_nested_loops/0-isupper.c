#include <stdio.h>
#include "main.h"

/**
 * _isupper - return a value depending on the case
 * @c: character
 * Return: returns a value
 */

int _isupper(int c)
{
	int i;

	i = isupper(c);
	if (i == 256)
		i = 1;
	return (i);
}
