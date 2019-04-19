#include "holberton.h"

/**
 * _strlen - finds len of a string
 * @str: str to mesure
 *
 * Return: len of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * argstostr - concatenates strings into one line
 * @ac: number of strings
 * @av: list of strings
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *ret, *sub, *tail;
	int i;
	long total = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total += _strlen(av[i]);
	ret = tail = malloc(total + ac + 1);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (sub = av[i]; *sub; sub++)
			*tail = *sub;
		*tail++ = '\n';
	}
	*tail = '\0';
	return (ret);
}
