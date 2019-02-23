#include "holberton.h"
/**
 * string_toupper - changes lowercase to upper.
 * @s: string pointer
 * Return: changed string
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] = (int)s[x] - 32;
		}
		x++;
	}
	return (s);
}
