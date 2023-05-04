#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 * @dest: one of the string
 * @src: the other string
 * Return: Return an output
 */

char *_strcat(char *dest, char *src)
{
	char *value;

	value = strcat(dest, src);
	return (value);
}
