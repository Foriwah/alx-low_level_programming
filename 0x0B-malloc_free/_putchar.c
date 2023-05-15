#include "main.h"
#include <unistd.h>

/**
 * _putchar - use to print
 * @c: a variable
 * Return: return a value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
