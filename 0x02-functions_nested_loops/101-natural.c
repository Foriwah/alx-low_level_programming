#include <stdio.h>

/**
 * main - Sum of numbers
 * Return: returns 0
 */

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
