#include <stdio.h>
#include "holberton.h"
/**
 * print_name - prints its own name
 * @argc: the size of argv
 * @argv: an array of imputs
 * Return: 0 on sucses 1 on fail
 */
int print_name(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}
