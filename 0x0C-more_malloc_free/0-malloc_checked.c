#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate a memory using malloc
 * @b: an unsigned variable
 * Return: exit with 98 if pointer is null
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
