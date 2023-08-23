#include "main.h"

/**
 * *_strcat -  appends the src string to the dest string
 * @dest: destination string
 * @src: string
 * Return: 1 Success
 */

char *_strcat(char *dest, char *src)
{
		size_t i;

		size_t dest_len = strlen(dest);
		
		for (i = 0 ; i < src[i] != '\0' ; i++)
			dest[dest_len + i] = src[i];
			dest[dest_len + i] = '\0';
		return (dest);
}
