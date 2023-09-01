#include "main.h"

/**
 * *_memcpy -  fills memory with a constant byte
 * @dest: the destination memory area
 * @n: number of bytes
 * @src: source string
 * Return: 1 Success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *res = memcpy(dest, src, n);
			return (res);
}
