#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H
#include <stdarg.h>
/**
 * struct printer - my pinter
 * @symbol: datatype
 * @print: call our functions
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list list);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
