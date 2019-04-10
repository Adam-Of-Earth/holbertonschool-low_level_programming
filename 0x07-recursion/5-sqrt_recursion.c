#include "holberton.h"

/**
 *
 *
 *
 *
 */
int sqrt_math(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i < n)
	{
		return (sqrt_math(n, i + 1));
	}
	else
		return (-1);
}

/**
 *
 *
 *
 *
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (sqrt_math(n, i));
}
