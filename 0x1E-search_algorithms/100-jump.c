#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search a sorted array for a value using jump search algorith
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: int value to search for
 *
 * Return: 1st index value position  or -1 if not present or null array
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int index = 0;
	int section_end = 0;

	if (array == NULL || size == 0 || array[index] > value)
		return (-1);

	while (section_end < (int)size)
	{
		if (array[section_end] < value)
		{
			printf("Value checked array[%d] = [%d]\n", section_end, array[section_end]);
			index = section_end;
			section_end += jump;
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", index, section_end);

	if (section_end > (int)size - 1)
		section_end = size - 1;

	while (index <= section_end)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}

	return (-1);
}
