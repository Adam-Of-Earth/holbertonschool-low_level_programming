#include "holberton.h"
/**
 * _islower - check to see if ch is lowercase
 *
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	int ch = 0;

	if (c >= 97 && c <= 122)
		ch = 1;
	return (ch);
}
