#include "search_algos.h"

/**
 * linear_search - searches for value in array using Linear search algorithm
 * @array: pointer to the first int element of the array to search in
 * @size: number of elements in array
 * @value: int value to search for
 *
 * Return: first index value or -1 if not found or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
