#include "main.h"

/**
  * prime - checks the input from is_prime_number
  * @n: variable
  * @base: base number to check
  * Return: return something
  */

int prime(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (prime(n + 1, base));
	return (1);
}

/**
  * is_prime_number - checks prime number
  * @n: variable
  * Return: return something
  */

int is_prime_number(int n)
{
	return (prime(2, n));
}
