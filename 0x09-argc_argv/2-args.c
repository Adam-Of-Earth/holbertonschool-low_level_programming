#include <stdio.h>
#include "holberton.h"
/**
 * main - prints all its arguments
 * @argc: number of arguments
 * @argv: what is going to print
 * Return: 0 sucses
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
