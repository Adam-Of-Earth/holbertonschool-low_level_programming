#include "search_algos.h"

/**
 * linea_search - linear search though an array
 * @array: ponter to start of array
 * @size: number of items in array
 * @value: value to search for
 * @Return: index of value or (-1) on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
