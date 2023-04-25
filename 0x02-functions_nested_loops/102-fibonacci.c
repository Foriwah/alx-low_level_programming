#include <stdio.h>
#include "main.h"

/**
 * main - fibonacci series
 * Return: return 0
 */

int main(void)
{
	long int first = 1;
	long int second = 2;
	long int temp;
	int i = 2;

	printf("%ld, %ld", first, second);

	while (i < 50)
	{
		temp =  second + first;
		i++;
		printf(", %ld", temp);
		first = second;
		second = temp;
	}
	putchar('\n');
	return (0);
}
