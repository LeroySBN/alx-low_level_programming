#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, suma = 0, sumb = 0;

	while (i < size)
	{
		suma += a[(size * i) + i];
		sumb += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", suma, sumb);
}

