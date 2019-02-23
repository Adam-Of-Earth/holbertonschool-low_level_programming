#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 if same
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int x = 0;

	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			diff = s1[x] - s2[x];
			break;
		}
		else
		{
			diff = 0;
		}
		s1++;
		s2++;
	}
	return (diff);
}
