#include "main.h"
#include <string.h>

/**
 * _memset - fill memory with a constant
 * @s: the buffer
 * @b: the value
 * @n: size
 * Return: return a value of type char
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
