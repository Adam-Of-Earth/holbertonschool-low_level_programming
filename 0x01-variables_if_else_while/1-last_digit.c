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
	printf("Last digit of %i ", n);
	int last = n % 10;

	if (last > 5)
	{
		printf("is %i and is greater than 5\n", last);
	}

	else if (last == 0)
	{
		printf("is %i and is 0\n", last);
	}

	else if (last < 6)
	{
		printf("is %i and is less than 6 and not 0\n", last);
	}

	return (0);
}
