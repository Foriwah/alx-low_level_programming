#include <stdio.h>

/**
 * main - print numbers with a commma
 * Return: Returns 0
 */

int main(void)
{
	int i;
	int num;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		num = 48 + i;
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		} else
			putchar('$');
	}
	putchar('\n');
	return (0);
}
