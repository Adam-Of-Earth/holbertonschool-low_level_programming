#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of ints from min to max
 * @min: min number
 * @max: max number
 * Return: array
 */
int *array_range(int min, int max)
{
	int diff = (max - min) + 1;
	int *array, *re;

	if (max < min)
	{
		return (NULL);
	}
	re = array = malloc(sizeof(int) * diff);
	if (array == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		*array = min;
		min++;
		array++;
	}
	return (re);
}
