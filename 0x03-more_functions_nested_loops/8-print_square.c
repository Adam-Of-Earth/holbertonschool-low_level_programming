#include "holberton.h"
/**
 * print_square - makes a square
 *@size: the length of a side
 * Return: void
 */
void print_square(int size)
{
	int size2 = size;

	for (; size2 > 0; size2--)
	{
		int side = size;

		while (side > 0)
		{
			_putchar('#');
			side--;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
