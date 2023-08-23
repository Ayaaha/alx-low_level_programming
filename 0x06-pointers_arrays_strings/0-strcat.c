#include "main.h"

/**
 * *_strcat -  appends the src string to the dest string
 * @dest: destination string
 * @src: string
 * Return: 1 Success
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
	}
	_putchar('\0');
	for (j = 0; dest[j] != '\0'; j++)
	{
		_putchar(src[j]);
	}
	_putchar('\0');
	_putchar('\n');
}
