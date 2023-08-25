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

	if (a[i] != '\0')
	{
		a[i] = toupper(a[i]);
	}
	while (a[i] != '\0')
	{
		c = a[i];
		switch (c)
		{
			case ' ':
			case '\t':
			case '\n':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ',':
			case ';':
			case '.':
				if (a[i + 1] != '\0' && isalpha(a[i + 1]))
				{
					a[i + 1] = toupper(a[i + 1]);
				}
				break;
		}
	i++;
	}
	return (orig);
}
