#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - multiplies two numbers
 * @argc: length
 * @argv: numbers to multiply
 * Return: 0 sucses 1 fail
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%i\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
