#include "holberton.h"
/**
 * _isalpha - check to see if c is lowercase or uppercase
 *@c: is the letter it is checking
 * Return: 1 if letter 0 otherwise
 */
int _isalpha(int c)
{
	int ch = 0;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		ch = 1;
	return (ch);
}
