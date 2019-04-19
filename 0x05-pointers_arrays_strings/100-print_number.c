#include "holberton.h"

/**
 * print_number - prints a number useing _putchar
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int div, quo;

	if (n < 0)
		_putchar('-');
	for (div = 1000000000; div >= 10; div /= 10)
	{
		quo = n / div;
		quo = quo > 0 ? quo : -quo;
		if (quo > 0)
			_putchar(quo % 10 + '0');
	}
	n = n % 10;
	n = n > 0 ? n : -n;
	_putchar(n + '0');
}
