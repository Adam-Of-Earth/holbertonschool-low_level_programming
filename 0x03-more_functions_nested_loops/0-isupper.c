#include "holberton.h"
/**
 * _isupper - checks c to see if it is upper
 *@c: number to check
 * Return: 1 if uppercase and 0 for else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
