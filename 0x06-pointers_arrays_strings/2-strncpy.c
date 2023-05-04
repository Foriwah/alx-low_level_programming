#include "main.h"
#include <string.h>

/**
 * _strncpy - a function to copy string
 * @dest: a string variable
 * @src: another string variable
 * @n: input integer
 * Return: Return a value
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *value;

	value = strncpy(dest, src, n);
	return (value);
}
