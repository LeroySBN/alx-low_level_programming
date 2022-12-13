#include "main.h"

/**
 * *_memcpy - function copies n bytes from memory area src
 * to memory area dest
 * @src: source memory area
 * @dest: destination memory
 * @n: number of times to copy to dest
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

