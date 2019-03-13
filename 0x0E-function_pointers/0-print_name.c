#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
