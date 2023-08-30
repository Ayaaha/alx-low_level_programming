#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: 1 Success
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		len = strlen(s);
	}
	return (len);
}
