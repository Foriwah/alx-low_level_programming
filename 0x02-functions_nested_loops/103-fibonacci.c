#include <stdio.h>

/**
 * main - Fibonacci even numbers
 * Return: Returns zero
 */

int main(void)
{
	int rem;
	int temp;
	int sum = 0;
	int first = 1;
	int second = 2;

	while (temp <= 4000000)
	{
		temp = first + second;
		rem = temp % 2;
		if(rem == 0)
			sum += temp;
		first = second;
		second = temp;
	}
	printf("%d\n", sum + 2);
	return (0);
}
