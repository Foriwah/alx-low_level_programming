#include <stdio.h>

/**
 * main - Fibonacci even numbers
 * Return: Returns zero
 */

int main(void)
{
	long int sum = 2;
	long int temp;
	long int first = 1;
	long int second = 2;

	while (temp < 4000000)
	{
		temp = first + second;
		if ((temp % 2) == 0)
			sum = sum + temp;
		first = second;
		second = temp;
	}
	printf("%ld", sum);
	return (0);
}
