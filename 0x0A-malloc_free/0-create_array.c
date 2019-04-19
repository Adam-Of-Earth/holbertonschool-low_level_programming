#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create a char array initialize it with c
 * @size: size of array
 * @c: starting char
 * Return: NULL if fails or zero.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *bot;

	if (size <= 0)
	{
		return (NULL);
	}
	bot = malloc(size * sizeof(char));
	if (bot == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		bot[i] = c;
	}
	return (bot);
}
