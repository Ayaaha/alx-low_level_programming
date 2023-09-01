#include "main.h"

/**
 *  wildcmp - compares two strings and returns 1
 * @s1: first string
 * @s2: second string
 * Return: 1 Success
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
	if (*(s2 + 1) == '*')
	{
	return (wildcmp(s1, s2 + 1));
	}
	return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	else if (*s1 == *s2)
	{
	if (*s1 != '\0')
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (1);
	}
	return (0);
}
