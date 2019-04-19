#include "holberton.h"
/**
 * rot13 - encodes in rot 13.
 * @s: string to convert
 * Return: converted string
 */
char *rot13(char *s)
{
	char *alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; alp[y] != '\0'; y++)
		{
			if (s[x] == alp[y])
			{
				s[x] = rot[y];
				break;
			}
		}
	}
	return (s);
}
