#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the mininum variable
 * @max: maximum variable
 * Return: Return an int
 */

int *array_range(int min, int max)
{
	int *prt;
	int array;

	if (min > max)
		return (NULL);
	prt = malloc(sizeof(int) * (max - min + 1));
	if (prt == NULL)
		return (NULL);
	array = 0;
	while (min <= max)
	{
		prt[array] = min;
		min++;
		array++;
	}
	return (prt);
}
