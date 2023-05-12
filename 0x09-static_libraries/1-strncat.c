#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate with number
 * @dest: string input
 * @src: second string input
 * @n: the number input
 * Return: Returns a value
 */

char *_strncat(char *dest, char *src, int n)
{
	char *value;

	value = strncat(dest, src, n);
	return (value);
}
