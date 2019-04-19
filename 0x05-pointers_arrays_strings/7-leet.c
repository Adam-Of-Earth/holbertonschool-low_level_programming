#include "holberton.h"
/**
 * leet - change string to leet.
 * @s: string to translate
 * Return: convet text
 */
char *leet(char *s)
{
	char *leet = "aAeEoOtTlL";
	char *speak = "4433007711";
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; leet[y] != '\0'; y++)
		{
			if (s[x] == leet[y])
			{
				s[x] = speak[y];
			}
		}
	}
	return (s);
}
