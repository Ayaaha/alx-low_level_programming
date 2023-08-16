#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 *
 * Return: 1 Success
 */
int main(void)
{
int _islower(int c)
{
	for (c = 97; c <= 122; c++)
	{
	if (islower(c))
	return (1);
	else
	return (0);
	}
}
}

