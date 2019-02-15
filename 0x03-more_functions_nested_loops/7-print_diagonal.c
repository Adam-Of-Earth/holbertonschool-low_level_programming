#include "holberton.h"
/**
 * print_diagonal - make a line at an angle
 *@n: line langth
 * Return: void
 */
void print_diagonal(int n)
{
	int y, x;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < y; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
