#include "main.h"

/**
 * is_prime_number - evaluates if a number is a prime.
 * @n: number to be evaluated
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - evaluates if a number is prime recursively.
 * @n: number to be evaluated
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}

