#include "holberton.h"

/**
 * rev_string - reversing a string backwords.
 * @s: string to reverce
 * Return: void
 */
void rev_string(char *s)
{
	int n, i, z = 0;
	char l;

	for (n = 0; s[n]; n++)
	{
	}
	i = n - 1;
	while (i >= z)
	{
		l = s[i];
		s[i] = s[z];
		s[z] = l;
		i--;
		z++;
	}
}
