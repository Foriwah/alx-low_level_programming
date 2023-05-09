#include "main.h"

/**
 * set_string - set the value of a pointer to string
 * @s: a pointer to a pointer
 * @to: pointer to char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
