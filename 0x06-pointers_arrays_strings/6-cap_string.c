#include "main.h"

/**
 * *cap_string - capilitilize string
 * @orig: original string
 * Return: 1 Success
 */

char *cap_string(char *orig)
{
	int i;
	char c;

	char *a = orig;
	i = 0;

	while (a[i] != '\0')
	{
		switch (c)
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case '\n':
			case '\t':
			case ' ':
				a[i] = toupper(a[i]);
			default:
			a[i] = a[i];
		}
	i++;
	}
	return (orig);
}
