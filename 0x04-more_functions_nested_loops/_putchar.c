#include <unistd.h>

/**
 * _putchar - write the character c
 * @c: Character
 * Return: 1 if true, 0 if false
 * On error, -1 return
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
