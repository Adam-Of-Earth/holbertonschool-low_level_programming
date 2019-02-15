#include <stdio.h>
/**
 * main - counts to 100 replacing 3 and 5s with Fizz Buzz
 *
 * Return:  int 0 (success)
 */
int main(void)
{
	int x, y, z;

	for (x = 1; x <= 100; x++)
	{
		y = x % 3;
		z = x % 5;
		if ((y == 0) && (z == 0))
		{
			printf("FizzBuzz ");
		}
		else if (z == 0)
		{
			printf("Buzz ");
		}
		else if (y == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%i ", x);
		}
	}
	return (0);
}
