#include <stdlib.h>

/**
 * str_concat - puts one string after the outher
 * @s1: first string
 * @s2: second string
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int i, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			len2++;
	}
	ret = malloc(len1 + len2 + 1);
	if (ret == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
			ret[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (i = 0; i < len2; i++)
			ret[len1 + i] = s2[i];
	}
	ret[len1 +len2] = '\0';
	return (ret);
}
