#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *   main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is", n);
	int last = n % 10;

	if (last > 5)
	{
		printf(" %i and is greater then 5\n", last);
	}

	else if (last == 0)
	{
		printf(" %i and is 0\n", last);
	}

	else if (last < 6)
	{
		printf(" %i and is less than 6\n", last);
	}

	return (0);
}
