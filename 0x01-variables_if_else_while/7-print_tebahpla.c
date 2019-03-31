#include <stdio.h>

/**
 * main - prints the alphavet in reverse
 *
 * Return: 0 (sucsess)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
