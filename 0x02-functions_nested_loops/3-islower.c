#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 *
 * Return: 1 Success
 */
int _islower(int c)
{
	for (c = 0; c <= 128, c++)
	if (islower(c))
	return (1);
	else
	return (0);
}
