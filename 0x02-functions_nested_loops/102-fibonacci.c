#include "holberton.h"

/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	unsigned long int current = 1, new, previous = 1;

	for (i = 0; i < 49; i++)
	{
		printf("%lu, ", current);
		new = previous + current;
		previous = current;
		current = new;
	}
	printf("%lu\n", current);
	return (0);
}
