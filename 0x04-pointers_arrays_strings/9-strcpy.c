#include "holberton.h"

/**
 * _strcpy - copys a string
 * @dest: string to copy to
 * @src: copy from
 *
 * Return: edited dest
 */
char *_strcpy(char *dest, char *src)
{
	char *destP, *srcP;

	destP = dest;
	srcP = src;
	for (; *srcP != '\0'; destP++, srcP++)
		*destP = *srcP;
	*destP = '\0';
	return (dest);
}
