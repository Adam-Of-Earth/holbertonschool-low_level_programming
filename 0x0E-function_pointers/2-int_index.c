#include "function_pointers.h"
/**
 * int_index - surech though an array for an int
 * @array: array looking trough
 * @size: number of elements in array
 * @cmp: function looking for number
 * Return: 1 if sucsesse else -1 of fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
