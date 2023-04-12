#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the array (number of elements)
 *
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
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL || size == 0 || array[0] > value)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		print_array(&array[low], (high - low) + 1);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			high = mid - 1;

		else
			low = mid + 1;
	}
	return (-1);
}
