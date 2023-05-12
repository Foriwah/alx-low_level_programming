#include <stdio.h>

/**
 * main - your main function
 * @argc: argument counter
 * @argv: array of argument
 * Return: Return 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = argc;
	printf("%s\n", argv[i - 1]);
	return (0);
}
