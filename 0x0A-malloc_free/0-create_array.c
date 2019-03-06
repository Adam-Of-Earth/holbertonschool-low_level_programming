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
	for (i = 0; size >= i; i++)
	{
		bot[i] = c;
	}
	return (bot);
}
