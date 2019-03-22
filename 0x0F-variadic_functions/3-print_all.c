#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints char, int, float, and strings
 * @format: type of argument passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, n = 0;
	char *s1 = "", *s2 = ", ";

	types print_types[] = {
		{'c', op_c},
		{'f', op_f},
		{'i', op_i},
		{'s', op_s},
		{'\0', NULL}
	};
	va_start(valist, format);
	while (format != NULL && format[i] != '\0')
	{
		while (oops[n].c != NULL)
		{
			if (oops[n].c == format[i])
			{
				printf("%s", s1);
				ops[i].ptr(valist);
				s1 = s2;
			}
			n++;
		}
		i++;
	}
	putchar('\n');
	va_end(valist);
}

void op_c(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
void op_i(va_list valist)
{
	printf("%i", va_arg(valist, int));
}
void op_f(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
void op_s(va_list valist)
{
	char *a = va_arg(valist, char *);

	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", a);
}
