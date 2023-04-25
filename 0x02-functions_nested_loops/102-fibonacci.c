#include <stdio.h>
#include "main.h"

/**
 * main - fibonacci series
 * Return: return 0
 */

int main(void)
{
	int first = 1;
	int second = 2;
	int temp;
	int i;

	printf("%d, %d", first, second);

	for (i = 0; i < 48; i++)
	{
		putchar(',');
		putchar(' ');
		temp = first + second;
		printf("%d", temp);
		first = second;
		second = temp;
	}
	putchar('\n');
	return (0);
}
