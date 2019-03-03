#include "holberton.h"

/**
 * _strncpy - copies a string
 * @src: string to copy
 * @dest: string coped over
 * @n: length of src to copy
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
