#include "holberton.h"

/**
 * puts_half - prints half a string
 * @s: string to print
 * Return: void
 */
void puts_half(char *s)
{
	int len = 0;
	char *hold;

	for (hold = s; *hold != '\0'; hold++)
		len++;
	for (hold -= len / 2; *hold; hold++)
		_putchar(*hold);
	_putchar('\n');
}
