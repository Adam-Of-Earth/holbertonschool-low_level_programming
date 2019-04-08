#include "holberton.h"

/**
 * _strstr - finds an array in another array
 *
 * @haystack: array
 * @needle: second array
 * Return: located array
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (j = 0 ; needle[j] ; j++)
	{
		for (i = 0 ; haystack[i] ; i++)
		{
			if (haystack[i] == needle[j])
				return (haystack + i);
		}
	}
	return (0);
}
