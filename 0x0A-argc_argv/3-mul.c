#include <stdio.h>
#include <stdlib.h>

/**
 * main - print a multiplication
 * @argc: array counter
 * @argv: arguments of array
 * Return: Return 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
