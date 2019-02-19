#include "holberton.h"
/**
 * swap_int - swaps two pointer.
 *@a: first pointer
 *@b: second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int holda = *a;

	*a = *b;
	*b = holda;
}
