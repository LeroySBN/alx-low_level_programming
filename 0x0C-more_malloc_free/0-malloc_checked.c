#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -allocates memory using malloc
 * @b: size of memory
 *
 * Return: pointer to the allocated memory (SUCCESS), 98 (FAIL)
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

	ptr = malloc(b);
	if (ptr ==NULL)
		exit(98);

	return (ptr);
}

