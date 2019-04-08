#include "holberton.h"

/**
 * _strpbrk - Searches for first instance in string @s of bytes from @accept.
 * @s: Strng being searched.
 * @accept: String being referenced for bytes in _strpbrk.
 * Return: Pointer upon success, null upon failure.
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (x + s);
			}
		}
	}
	return ('\0');
}
