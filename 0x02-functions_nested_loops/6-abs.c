#include "holberton.h"
/**
 * _abs - returns absolute of any number
 *@i : the number imput
 * Return: the absolute form
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		i = i * -1;
		return (i);
	}
}
