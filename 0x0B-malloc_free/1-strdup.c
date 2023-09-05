#include "main.h"

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: 1 Success
 */

char *_strdup(char *str)
{
	int i, len;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	c = malloc((len + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);

	}
	else
	{
		for (i = 0; i <= len; i++)
		{
			c[i] = str[i];
		}
	return (c);
	}
}
