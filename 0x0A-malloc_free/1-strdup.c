#include "holberton.h"
/**
 * _strdup - copies string to allocated space
 * @str: string to coppie into the space
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int i;
	char *bot = str;
	if (*str =='\0')
	{
		
