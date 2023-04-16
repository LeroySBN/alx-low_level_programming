#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the array (number of elements)
 *
 * Return: nothing
 */
void print_array(int *array, int size)
{
	int i;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}

	printf("\n");
}


/**
 * binary_search - searches for value in array using Binary search algorithm
 * @array: pointer to the first int element of the array to search in
 * @size: number of elements in array
 * @value: int value to search for
 *
 * Return: first index value or -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	int lower_bound = 0;
	int higher_bound = size - 1;
	int mid;

	if (array == NULL || size == 0)
		return (-1);

	while (lower_bound <= higher_bound)
	{
		mid = lower_bound + (higher_bound - lower_bound) / 2;

		print_array(&array[lower_bound], (higher_bound - lower_bound) + 1);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			higher_bound = mid - 1;

		else
			lower_bound = mid + 1;
	}

	return (-1);
}


/**
 * exponential_search - search for a value in a sorted array using exponential
 * search and binary search algorithms
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: fist index value is found at or -1 if not present or array is null
 */
int exponential_search(int *array, size_t size, int value)
{
	int lower_bound;
	int upper_bound = 1;
	int index;

	if (array == NULL || size == 0)
		return (-1);

	while (upper_bound < (int)size && array[upper_bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", upper_bound, array[upper_bound]);
		lower_bound = upper_bound;
		upper_bound *= 2;
	}

	if (upper_bound >= (int)size)
		upper_bound = size - 1;

	printf("Value found between indexes [%d] and [%d]\n", lower_bound,
	       upper_bound);
	index = binary_search(&array[lower_bound],
				       upper_bound - lower_bound + 1, value);

	if (index != -1)
		index += lower_bound;

	return (index);
}
