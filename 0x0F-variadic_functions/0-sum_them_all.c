#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - finds the sum of all numbers in the parameters
 * @n: amount of numbers in parameters
 *
 * Return: sum if sucsess 0 if fail
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
