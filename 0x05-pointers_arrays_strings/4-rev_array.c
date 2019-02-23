#include "holberton.h"
/**
 * reverse_array - reverse a number array.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int x, y;

	n = n - 1;
	for (x = 0; x < n; x++, n--)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
