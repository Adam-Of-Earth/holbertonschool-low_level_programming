#include "holberton.h"
/**
 * print_line - draws a line as long as n
 *@n: length of line
 * Return: void
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
