#include "holberton.h"
/**
 * _strlen_recursion - calculates the length of a string with recursion
 * @s: string to mesure
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s == '\0')
	{
		return (num);
	}
	num++;
	_strlen_recursion(s + 1);
}
