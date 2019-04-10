#include "holberton.h"

/**
 *
 *
 *
 *
 */
int is_prime_number(int n)
{
	int div = 2;
	int t = 10;

	if (n <= 1)
	{
		return (0);
	}
	else if (n > 5)
	{
		if ((n % t) != 1 && (n % t) != 3 && (n % t) != 7 && (n % t) != 9)
		{
			return (0);
		}
	}
	else if ((div * div) <= n)
	{
		if (n % div == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_number(n % (div + 1)));
		}
		return (1);
	}
}
