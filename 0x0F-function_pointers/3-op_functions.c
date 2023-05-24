#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two numbers
 * @a: numnber 1
 * @b: number 2
 * Return: an int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: numnber 1
 * @b: number 2
 * Return: an int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mutiply two numbers
 * @a: numnber 1
 * @b: number 2
 * Return: an int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: numnber 1
 * @b: number 2
 * Return: an int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulous two numbers
 * @a: numnber 1
 * @b: number 2
 * Return: an int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
