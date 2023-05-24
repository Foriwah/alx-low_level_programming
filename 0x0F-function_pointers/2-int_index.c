#include "function_pointers.h"

/**
 * int_index - printing out the index
 * @array: the array
 * @size: the size
 * @cmp: function pointer
 * Return: Returns ans integer value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
