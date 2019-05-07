#include "holberton.h"
/**
 * _strlen_recursion - calculates the length of a string with recursion
 * @s: string to mesure
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
