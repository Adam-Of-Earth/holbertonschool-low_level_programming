#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memorey
 * @b: amount of memory to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *bot;

	bot = malloc(b);
	if (bot == NULL)
	{
		exit(98);
	}
	return (bot);
}
