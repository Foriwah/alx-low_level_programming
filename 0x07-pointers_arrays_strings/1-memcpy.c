#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: destination variable
 * @src: source variable
 * @n: size
 * Return: returns a char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
