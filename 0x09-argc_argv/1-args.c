#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: arguments number
 * @argv: string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	if (**argv != '\0')
	{
	}
	return (0);
}
