#include "holberton.h"

/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int i, max = 1024, sum = 0;

	for (i = 3; i < max; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
