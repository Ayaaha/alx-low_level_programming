#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 *
 * Return: 1 Success
 */
int _islower(int c)
{
	for (c = 97; c <= 127; c++)
	if (c == islower(c))
	return (1);
	else
	return (0);
}
