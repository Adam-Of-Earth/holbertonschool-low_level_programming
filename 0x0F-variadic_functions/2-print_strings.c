#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints out strings givein as peramiters
 * @separator: print between strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *bot;

	va_start(valist, n);
	while (i < n)
	{
		bot = va_arg(valist, char *);
		if (bot == NULL)
			printf("(nil)");
		else
			printf("%s", bot);
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	putchar('\n');
	va_end(valist);
}
