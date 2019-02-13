#include "holberton.h"
/**
 * print_sign - checks if n is positive or negitive
 *@n: is the number im checking
 * Return: 1 if + , 0 if 0, and -1 if -
 */
int print_sign(int n)
{
	int i = 0;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}
	return (i);
	_putchar('\n');
}
