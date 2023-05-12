#include "main.h"
#include <string.h>

/**
 * _strspn - lenght of a prefix substring
 * @s: a variable
 * @accept: another variable
 * Return: Return a value
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
