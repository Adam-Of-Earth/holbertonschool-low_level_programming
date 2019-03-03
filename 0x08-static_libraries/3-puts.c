#include "holberton.h"
/**
 * _puts - prints out a string *str then a new line.
 *@str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int n;
	char l;

	for (n = 0; str[n]; n++)
	{
		l = str[n];
		_putchar(l);
	}
	_putchar('\n');
}
