#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * Return: 1 Success
 */
char *string_toupper(char *orig)
{
	char *conv = orig;

	while (*conv != '\0')
	{
	*conv = toupper(*conv);
	conv++;
	}
	return (orig);
}
