#include "holberton.h"
/**
 * times_table - prints the times table
 *
 * Return: void
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			int sum = (x * y);

			_putchar(',');
			_putchar(' ');

			if (sum < 10)
			{
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
