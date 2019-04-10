#include "holberton.h"

/**
 * sqrt_math - recursivly checks greater number to see if n is a pefect square
 * @n: number checked
 * @i: potental factor
 * Return: i (sucsess) -1 (falure)
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
 * _sqrt_recursion - calls the fuction to find if n is natural square
 * @n: number to test
 *
 * Return: i (sucsess) -1 (falure)
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (sqrt_math(n, i));
}
