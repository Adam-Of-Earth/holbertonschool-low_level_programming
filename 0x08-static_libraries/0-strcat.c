#include "holberton.h"
/**
 * *_strcat - this program will append two strings
 * @src: first string
 * @dest: second string
 * Return: pointer to new string
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x]; x++)
	{
	}
	y = 0;
	while (src[y] != 0)
	{
		dest[x + y] = src[y];
		y++;
	}
	return (dest);
}
