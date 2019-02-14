#include "holberton.h"
/**
 * print_numbers - counts up to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
