#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 *@i: imput number
 * Return: last digit
 */
int print_last_digit(int i)
{
	int n;

	if (i >= 0)
	{
		n = i % 10;
	}
	else
	{
		n = -i % 10;
	}
	_putchar (n + '0');
	return (n);
}
