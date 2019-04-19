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
		if (n % 2 == 0)
		{
			l = str[n];
			_putchar(l);
		}
	}
	_putchar('\n');
}
