#include "holberton.h"

/**
 * print_array - prints out elements of an array
 * @a: array of ints
 * @n: number of arrays to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int index = 0;

	for (; a[index] != '\0' && index < n ; index++)
	{
		if (index == n - 1)
			printf("%i\n", a[index]);
		else
			printf("%i, ", a[index]);
	}
}
