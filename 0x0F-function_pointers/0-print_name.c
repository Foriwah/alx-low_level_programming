#include "function_pointers.h"

/**
 * print_name - funtion to print the name
 * @name: name of the person
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
