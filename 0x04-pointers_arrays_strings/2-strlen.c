#include "holberton.h"
/**
 * _strlen - takes an pointer *s returns its length.
 *@s: pointer imput
 * Return: length of strning.
 */
int _strlen(char *s)
{
	int i, legth = 0;

	for (i = 0; s[i] != 0; i++)
	{
		legth++;
	}
	return (legth);
}
