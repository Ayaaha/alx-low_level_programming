#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: character to be found
 * Return: 1 Success
 */

char *_strpbrk(char *s, char *accept)
{
	char *res = strpbrk(s, accept);
			return (res);
}
