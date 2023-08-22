#include "main.h"

/**
 * _atoi -  convert a string to an integer.
 * @s: string to be converted to integer
 * Return: 1 Success
 */

int _atoi(char *s)
{
	int num;

	while (*s && !isdigit(*s) && *s != '-' && *s != '+')
	{
	s++;
	}
	num = atoi(s);
	return (num);
}
