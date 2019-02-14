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
			int a = hour / 10;
			int b = hour % 10;
			int c = min / 10;
			int d = min % 10;

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c +'0');
			_putchar(d + '0');
			_putchar('\n');
		}

	}
}
