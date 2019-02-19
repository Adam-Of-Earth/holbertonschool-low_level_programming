#include "holberton.h"
/**
 * puts2 - prints everyother char.
 * @str: string to print
 * Return: void
 */
void puts2(char *str)
{
	int n;
	char l;

	for (n = 0; str[n]; n++)
	{
		l = str[n];
		_putchar(l);
		n++;
	}
	_putchar('\n');
}
