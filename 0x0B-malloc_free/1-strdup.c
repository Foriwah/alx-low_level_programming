#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a newly allocated space in memory
 * @str: a variable
 * Return: Return a value
 */

char *_strdup(char *str)
{
	char *value = strdup(str);

	return (value);
}
