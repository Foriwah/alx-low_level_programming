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
	int num;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = a; c < 10; c++)
			{
				if (a == 0 && b == 0)
					num = 0;
				else
					num = b + 1;
				for (d = num; d < 10; d++)
				{
					if (((a == c) && (b == d)) || ((c == 0) && (d == 0)))
						continue;
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
	putchar('\n');
	return (0);
}
