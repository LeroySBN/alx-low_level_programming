#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicates a string.
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	while ((cpy[i] = str[i]) != '\0')
		i++;

	return (cpy);
}

