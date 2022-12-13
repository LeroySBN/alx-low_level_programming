#include "main.h"

/**
 * *_memset - function fills with a constant byte.
 * @s: memory to be altered
 * @b: source of the byte that will be used to copy
 * @n: number of times to copy b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

