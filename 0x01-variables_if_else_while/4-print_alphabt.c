#include <stdio.h>

/**
 * main - Print alphabet except e and q
 * Return: Returns 0
 */

int main(void)
{
	char ac;

	for (ac = 'a'; ac <= 'z'; ac++)
	{
		if (ac == 'e' || ac == 'q')
			continue;
		else
			putchar(ac);
	}
	putchar('\n');
	return (0);
}
