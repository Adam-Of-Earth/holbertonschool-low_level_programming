#include "holberton.h"
/**
 * print_square - makes a square with the side length size
 *@size: the length of a side
 * Return: void
 */
void print_square(int size)
{
	int size2;

	for (; size > 0; size--)
	{
		for (size2 = size; size2 > 0; size2--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
