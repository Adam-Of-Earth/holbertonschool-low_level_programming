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
	
