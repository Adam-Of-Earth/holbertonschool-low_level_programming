#include "holberton.h"
/**
 * _memset - changes a char at int n to char b
 * @s: string to change
 * @b: new value
 * @n: location
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *m = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*m = b;
		m++;
	}
	return (s);
}
