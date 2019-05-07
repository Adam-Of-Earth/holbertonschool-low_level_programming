#include "holberton.h"
/**
 * _isdigit - check if c is a number
 *@c: imput
 * Return: 1 if digit or else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
