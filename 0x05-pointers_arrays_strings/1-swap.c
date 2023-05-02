#include "main.h"

/**
 * swap_int - Swap entries
 * @a: Input variable
 * @b: Input variable
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
