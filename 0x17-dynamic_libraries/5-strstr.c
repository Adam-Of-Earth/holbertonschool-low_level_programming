#include "holberton.h"
#include <stdlib.h>
/**
 * _strstr - find needle in haystack
 * @haystack: to find in
 * @neddle: to find
 *
 * return: haystack if found
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay = haystack;
	char *ned = needle;

	while (*haystack != '\0')
	{
		hay = haystack;
		while (*ned != '\0' && *ned == *hay)
		{
			hay++;
			ned++;
		}
		if (*ned == '\0')
		{
			return (haystack);
		}
		ned = needle;
		haystack++;
	}
	return (NULL);
}
