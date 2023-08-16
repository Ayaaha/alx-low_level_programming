#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 Success
 */
int _isalpha(int c)
{
	for (c = 0; c <= 127; c++)
	{
	if (isalpha(c))
	return (1);
	else
	return (0);
	}
}

