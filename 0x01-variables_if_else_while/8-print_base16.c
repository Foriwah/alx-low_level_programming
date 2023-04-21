#include <stdio.h>

/**
 * main - hexadecimals
 * Return: Returns 0
 */

int main(void)
{
	char ac;
	int aa;

	for (aa = 0; aa < 10; aa++)
		putchar(48 + aa);
	for (ac = 'a'; ac < 'g'; ac++)
		putchar(ac);
	putchar('\n');
	return (0);
}
