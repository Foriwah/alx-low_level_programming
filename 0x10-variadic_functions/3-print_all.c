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
	char alphabet;

	alphabet = va_arg(list, int);
	printf("%c", alphabet);
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

	value = va_arg(list, double);
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

/**
 * print_all - print them all
 * @format: the datatypes
 * @...: our ellipses
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_fl},
		{"s", print_str}
	};

	va_start(list, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(list);
			separator = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(list);
}
