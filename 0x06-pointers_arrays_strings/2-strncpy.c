#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: string
 * @n: n bytes
 * Return: 1 Success
 */

char *_strncpy(char *dest, char *src, int n)
{
		int i, len;

		len = strlen(dest);

		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
		dest[i] = '\0';
		i++;
		}
		return (dest);
}
