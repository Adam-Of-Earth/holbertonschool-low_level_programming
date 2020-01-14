#include "search_algos.h"

/**
 * linear_search - looks for an element with linear search
 * @array: pointer to array of integers
 * @size: number of elements in array
 * @value: emement to search for
 *
 *Return: found element or -1 if Fail
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (i);
}
