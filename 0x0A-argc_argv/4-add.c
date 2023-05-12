#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - printing at command line
 * @argc: argument counter
 * @argv: array of arguments
 * Return: Return something
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int k;
	int sum = 0;
	char *a;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = argv[i];
			for (k = 0; k < strlen(a); k++)
			{
				if (k[a] < 48 || k[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(a);
			a++;

		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
