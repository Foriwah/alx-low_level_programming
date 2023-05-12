#include "main.h"
#include <string.h>

/**
 * _strstr - locate a substring
 * @haystack: a char variable
 * @needle: a char variable
 * Return: Return a char value
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
