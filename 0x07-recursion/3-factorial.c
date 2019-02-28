#include "holberton.h"

/**
 * factorial - finds the factorial of a number
 * @n: imput number
 * Return: factorial or -1 if less then 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n -1));
	}
}
