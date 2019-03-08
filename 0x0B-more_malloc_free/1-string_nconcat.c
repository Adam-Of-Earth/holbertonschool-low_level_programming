#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: how many bytes of string 2 to concat
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *bot, *counter = s1, *counter2 = s2;
	unsigned int len, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; *counter; counter++)
	{
		len++;
	}
	for (len2 = 0; *counter2; counter2++)
	{
		len2++;
	}
	if (n <= len2)
	{
		len = len + (n + 1);
	}
	else
	{
		len = len2 + len + 1;
	}
	counter = bot = malloc(sizeof(char) * len);
	if (bot == NULL)
	{
		return (NULL);
	}
	for (; *s1 != '\0'; s1++)
	{
		*(counter++) = *s1;
	}
	for (; *s2 != '\0'; s2++)
	{
		*(counter++) = *s2++;
	}
	return (bot);
}
