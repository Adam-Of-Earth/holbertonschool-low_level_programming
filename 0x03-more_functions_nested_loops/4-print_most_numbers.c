#include "holberton.h"
/**
 * print_most_numbers - prints 0-9 without 2 or 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			i = i + 0;
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
