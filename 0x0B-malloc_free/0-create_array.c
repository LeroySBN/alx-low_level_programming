#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * initializes it with a specific char.
 * @size: size of array
 * @c: char to be initialized
 *
 * Return: pointer to the arra or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);

	if (s == NULL)
		return (0);

	while (i < size)
	{
		*(s + i) = c;
		i++;
	}
	*(s + 1) = '\0';
	return (s);
}

