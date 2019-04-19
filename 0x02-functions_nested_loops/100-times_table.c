#include "holberton.h"

/**
 * print_times_table - prints out a times table up to 15
 * @n: size of table
 *
 * return: void
 */
void print_times_table(int n)
{
	int x, y, sum;

	if (n < 0 || n > 15)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			sum = x * y;
			if (y > 0)
			{
				if (sum < 100)
					_putchar(' ');
				else
					_putchar(sum / 100 + '0');
				if (sum < 10)
					_putchar(' ');
				else
					_putchar(sum / 10 % 10 + '0');
			}
			_putchar (sum % 10 + '0');
			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
