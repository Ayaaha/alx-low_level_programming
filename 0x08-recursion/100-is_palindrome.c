#include "main.h"

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @sb: begining of the string
 * @sd: ending of the string
 * Return: 1 Success
 */


int palindrome(char *sb, char *sd);

int is_palindrome(char *s)
{
	char *s1;
	int len;

	len = strlen(s);
	s1 = s + len - 1;

	return (palindrome(s, s1));
}

/**
 * palindrome - helper recursion function
 * @sb: begining of the string
 * @sd: ending of the string
 * Return: 1 Success
 *
 */

int palindrome(char *sb, char *sd)
{
	if (*sb == 0 && *sd == 0)
	{
	return (1);
	}
	else if (sb >= sd)
	{
	return (1);
	}
	else if (sb != sd)
	{
	return (0);
	}
	else
	{
	return (palindrome(sb + 1, sd - 1));
	}
}
