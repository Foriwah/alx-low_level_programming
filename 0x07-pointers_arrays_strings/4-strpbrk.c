#include "main.h"
#include <string.h>

/**
 * _strpbrk - Search for any set of bytes
 * @s: a variable
 * @accept: a variable
 * Return: Return a char value
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
