#include "holberton.h"

/**
 * print_rev - prints a string backwords.
 * @s: string to reverce
 * Return: void
 */
void print_rev(char *s)
{
	int n, i;
	char l;

	for (n = 0; s[n]; n++)
	{
	}
	i = n - 1;
	while (i >= 0)
	{
		l = s[i];
		_putchar(l);
		i--;
	}
	_putchar('\n');
}
