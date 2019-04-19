#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string pointer
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	char *delim = " \t\n,:.!?\"(){}";
	int index = 0, index2 = 0;

	while (s[index] != '0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
		}
		while (delim[index2] != '\0')
		{
			if (s[index] == delim[index2]
			    && s[index + 1] >= 'a'
			    && s[index + 1] <= 'z')
			{
				s[index + 1] -= 32;
			}
			index2++;
		}
		index++;
		index2 = 0;
	}
	return (s);
}
