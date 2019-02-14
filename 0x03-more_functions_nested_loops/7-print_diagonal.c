#include "holberton.h"
/**
 * print_diagonal - make a line at an angle
 *@n: line langth
 * Return: void
 */
void print_diagonal(int n)
{
	int space = n;

	for (; n >= 0; n--)
	{
		while (space > 0)
		{
			_putchar('\\');
			break;
		}
		_putchar('\n');
		for (space = n; space > 0; space--)
		{
			_putchar(' ');
		}
	}
}
