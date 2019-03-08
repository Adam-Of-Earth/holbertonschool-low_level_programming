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
	char *bot, *counter = s1;
	int i, len = 0, num = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; *counter; counter++)
	{
		len++;
	}
	len = len + (n + 1);
	bot = malloc(sizeof(char) * len);
	counter = bot;
	if (bot == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		counter[i] = s1[i];
	}
	for (; i < len; i++)
	{
		counter[i] = s2[num];
		num++;
	}
	return (bot);
}
