#include "main.h"

/**
 * *_strcat -  appends the src string to the dest string
 * @dest: destination string
 * @src: string
 * Return: 1 Success
 */

char *_strcat(char *dest, char *src)
{
		size_t i, len;

		len = strlen(dest);
		for (i = 0 ; src[i] != '\0'; i++)
			dest[len + i] = src[i];
			dest[len + i] = '\0';
		return (dest);
}
