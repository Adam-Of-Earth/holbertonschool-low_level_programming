#include "holberton.h"
/**
 * _strdup - copies string to allocated space
 * @str: string to coppie into the space
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int i, size;
	char *bot;

	size = _strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	bot = malloc(sizeof(char) * size + 1);
	if (bot == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		bot[i] = str[i];
	}
	return (bot);
	free(bot);
}

/**
 * _strlen - counts chars of str
 * @str: string to count
 * Return: len
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
