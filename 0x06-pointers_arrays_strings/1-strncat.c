#include "main.h"

/**
 * *_strncat -  appends the src string to the dest string
 * @dest: destination string
 * @src: string
 * @n: n bytes
 * Return: 1 Success
 */

char *_strncat(char *dest, char *src, int n)
{
		size_t i, len;

		len = strlen(dest);
		for (i = 0 ; i < n && src[i] != '\0'; i++)
		{
			dest[len + i] = src[i];
		}
			dest[len + i] = '\0';
		return (dest);
}
