#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i};
		a[i] = a[n];
		a[n] = j;
	}
}
