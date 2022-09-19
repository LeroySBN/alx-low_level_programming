#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to first integer value
 * @b: pointer to second integer value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

