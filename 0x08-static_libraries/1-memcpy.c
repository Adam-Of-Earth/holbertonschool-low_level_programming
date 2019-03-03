#include "holberton.h"
/**
 * _memcpy - copys a char from memory area n
 * @dest: copy too
 * @src: copy from
 * @n: how much to copy
 * Return: new dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *destpoint = dest;
	char *srcpoint = src;

	for (; i < n; i++)
	{
		*destpoint = *srcpoint;
		destpoint++;
		srcpoint++;
	}
	return (dest);
}
