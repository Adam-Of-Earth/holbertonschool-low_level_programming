#include "holberton.h"
/**
 * _print_rev_recursion - prints out a string backwords useing recursion
 * @s: string to reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
