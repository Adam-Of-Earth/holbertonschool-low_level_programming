#include "holberton.h"
/**
 * more_numbers - prints 0-14  10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int n;

		for (n = 0; n <= 14; n++)
		{

			while (n > 9)
			{
				_putchar((n / 10) + '0');
				break;
			}
			_putchar((n % 10) + '0');

		}
		_putchar('\n');
	}
}
