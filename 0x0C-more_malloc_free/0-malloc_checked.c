#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * *malloc_checked -allocates memory using malloc
 * @b: size of memory
 *
 * Return: pointer to the allocated memory (SUCCESS), 98 (FAIL)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr != NULL)
		return (ptr);

	exit(98);
}

