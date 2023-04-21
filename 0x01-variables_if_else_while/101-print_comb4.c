#include <stdio.h>

/**
 * main - Generate a combination
 * Return: Returns 0
 */

int main(void)
{
	int n;
	int a;
	int b;

	for (n = 0; n < 8; n++)
	{
		for (a = (n + 1); a < 9; a++)
		{
			for (b = (a + 1); b < 10; b++)
			{
				if ((n == a && n == b) || n == b || n == a || a == b)
					continue;
				else
				{
					putchar(48 + n);
					putchar(48 + a);
					putchar(48 + b);
					if (n == 7 && a == 8 && b == 9)
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
