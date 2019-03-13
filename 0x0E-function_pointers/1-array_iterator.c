#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - execute "action" on each element of array
 * @array: array to iderate though
 * @size: size of array
 * @action: fuction to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;
	int *bot = array;

	if (array == NULL || action == NULL)
		return;
	if (size == 0)
		return;
	for (; x < size; x++)
	{
		(action)(*bot);
		bot++;
	}
}
