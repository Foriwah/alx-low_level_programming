#include "main.h"


/**
 * _islower - determines lower case
 * @c: input variable
 * Return: Returns a value
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
