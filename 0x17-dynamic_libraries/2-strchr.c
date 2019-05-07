#include "holberton.h"
/**
 * _strchr - scans through string s to find char c.
 * @s: string imput
 * @c: char surching though the string to find
 * Return: pointer to c in string s or null if not found
 */
char *_strchr(char *s, char c)
{
	char *bot = s;

	while (*bot != '\0')
	{
		if (*bot == c)
		{
			break;
		}
		bot++;
	}
	if (*bot == c)
	{
		return (bot);
	}
	return ('\0');
}
