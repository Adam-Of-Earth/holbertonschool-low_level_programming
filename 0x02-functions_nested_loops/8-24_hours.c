#include "holberton.h"
/**
 *jack_bauer - counts out all mineuts in 24 hours.
 *
 *Return: void
 */
void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			int a, b, c, d;
			a = hour / 10;
			b = hour % 10;
			c = min / 10;
			d = min % 10;
			_putchar('a');
			_putchar('b');
			_putchar(':');
			_putchar('c');
			_putchar('d');
		}
		_putchar('\n');
	}
}
