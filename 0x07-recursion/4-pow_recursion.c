#include "holberton.h"
/**
 * _pow_recursion - raise x to the power of y
 * @x: base value
 * @y: power of number
 * Return: value or -1 if lower then 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
