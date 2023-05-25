#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list list);
void print_int(va_list list);
void print_fl(va_list list);
void print_str(va_list list);
void print_all(const char * const format, ...);

/**
 * print_char - pointer function
 * @list: the list
 */

void print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	printf("%c", c);
}
/**
 * print_int - pointer function
 * @list: the list
 */

void print_int(va_list list)
{
	int num;

	num = va_arg(list, int);
	printf("%d", num);
}

/**
 * print_fl - pointer function
 * @list: the list
 */

void print_fl(va_list list)
{
	float value;

	value = va_arg(list, float);
	printf("%f", value);
}

/**
 * print_str - pointer function
 * @list: the list
 */

void print_str(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
