#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 *@i: imput number
 * Return: last digit
 */
int print_last_digit(int i)
{
	i = i % 10;

	if (i >= 0)
	{
		_putchar(i + '0');
	}
	else
	{
		i = i * -1;
		_putchar (i + '0');
	}
	return (i);
}
