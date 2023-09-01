#include "main.h"

/**
 * *_memset -  fills memory with a constant byte
 * @s: the memory area pointed to by s
 * @n: number of bytes
 * @b: constsnt byte
 * Return: 1 Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *res = memset(s, b, n);
			return (res);
}
