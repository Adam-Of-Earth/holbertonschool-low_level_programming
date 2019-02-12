#include "holberton.h"
/**
 *   print_alphabet - prints out the alphabet useing _putchar
 *
 *  Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar ('\n');
}
