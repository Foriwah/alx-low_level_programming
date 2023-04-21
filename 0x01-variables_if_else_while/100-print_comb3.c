#include <stdio.h>

/**
 * main - Print 2 digit numbers
 * Return: Returns 0
 */

int main(void)
{
	int n;
	int a;

	for (n = 0; n < 9; n++)
	{
		for (a = (n + 1); a < 10; a++)
		{
			if (n == a)
				continue;
			else
			{
				putchar(48 + n);
				putchar(48 + a);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
