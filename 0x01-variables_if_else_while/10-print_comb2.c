#include <stdio.h>

/**
 * main - counts up to 99
 *
 * Return: 0 (sucsses)
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x != 9 || y != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
