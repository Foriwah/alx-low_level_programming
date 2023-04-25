#include "main.h"
#include <unistd.h>

/**
 * _putchar - Outputs the character p
 * @p: the character to print
 */

int _putchar(char p)
{
	return(write(1, &p, 1));
}
