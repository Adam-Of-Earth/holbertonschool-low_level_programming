#include "holberton.h"

/**
 *
 *
 *
 *
 */

int is_palindrome(char *s)
{
	int end, n;
	end = _end_of_string(s);
	if(end == 0)
		return(1);
	n = is_pal_check(end, s, 0);
	return (n);
}

/**
 *
 *
 *
 *
 */
int _end_of_string(char *s)
{
	if (*s)
	{
		return (_end_of_string(s + 1));
	}
	return (0);
}

int is_pal_check(int end, char *s, char begin)
{
	if(begin >= end)
	{
		return (1);
	}
	if (s[begin] != s[end])
	{
		return (0);
	}
	return(is_pal_check((end - 1), s, (begin + 1)));
}
