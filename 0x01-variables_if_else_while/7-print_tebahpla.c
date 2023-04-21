#include <stdio.h>

/**
 * main - print alphabet in reverse
 * Return: Returns 0
 */

int main(void)
{
	char ac;

	for (ac = 'z'; ac >= 'a'; ac--)
		putchar(ac);
	putchar('\n');
	return (0);
}
