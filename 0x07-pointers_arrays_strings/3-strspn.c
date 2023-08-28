#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: character to be found
 * Return: 1 Success
 */

unsigned int _strspn(char *s, char *accept)
{
	char *res = strspn(s, accept);
			return (res);
}
