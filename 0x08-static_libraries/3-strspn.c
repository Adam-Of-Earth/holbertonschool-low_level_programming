#include "holberton.h"
/**
 * _strspn - re
 * @s: string
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n;
	int num = 0;

	for (i = 0 ; s[i] ; i++)
	{
		for (n = 0 ; accept[n] ; n++)
		{
			if (s[i] == accept[n])
			{
				num++;
			}
		}
		if (i > num)
			break;
	}
	return (num);
}
