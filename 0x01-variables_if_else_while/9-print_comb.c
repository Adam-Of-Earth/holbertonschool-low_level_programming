#include <stdio.h>

/**
 * main - count 0 to 9 with sperators
 *
 * Return: 0 (sucsses)
 *
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar (x % 10 + '0');
		if (x < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
}
