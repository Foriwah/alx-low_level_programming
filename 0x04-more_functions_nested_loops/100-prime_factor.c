#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - largest prime factor
 * Return: Always a success
 */

int main(void)
{
	long int num = 612852475143;
	int i = 2;

	for (i = (int) sqrt(num); i > 2; i++)
	{
		if ((num % i) == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
