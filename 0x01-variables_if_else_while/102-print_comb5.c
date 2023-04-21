#include <stdio.h>

/**
 * main - Combination of numbers
 * Return: Returns 0
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = a; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (a == 0 && b == 0 && c == 0 && d == 0)
						continue;
					else
					{
						putchar(48 + a);
						putchar(48 + b);
						putchar(' ');
						putchar(48 + c);
						putchar(48 + d);
						if (c == 9 && d == 9 && a == 9 && b == 8)
							continue;
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
