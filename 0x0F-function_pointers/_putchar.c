#include <unistd.h>

/**
 * _putchar - print an output single character
 * @c: input variable
 * Return: Returns a value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
