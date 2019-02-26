#include "holberton.h"
/**
 * _strchr - scans through string s to find char c.
 * @s: string imput
 * @c: char surching though the string to find
 * Return: pointer to c in string s or null if not found
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		if (c == '\0')
		{
			return ('\0');
		}
		s++;
	}
	return ('\0');
}
