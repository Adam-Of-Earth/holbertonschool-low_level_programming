#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * @dest: pointer to string to concatenate
 * @src: pointer to string
 * @n: bytes of src to use
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y, len;

	len = _strlen(dest);
	x = len;
	for (y = 0; (y < n) && (src[y]); y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}

/**
 * _strlen - finds length of *s
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
	}
	return (i);
}
