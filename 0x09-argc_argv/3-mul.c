#include <stdio.h>
#include "holberton.h"
/**
 * main - multiplies two numbers
 * @argc: length
 * @argv: numbers to multiply
 * Return: 0 sucses 1 fail
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum = *argv[1] * *argv[2];
		printf("%i\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
