#include "main.h"

/**
 * rev_string  -   prints  a string in reverse
 * @s:string
 * Return: 1 Success
 */

void rev_string(char *s)
{
	int len, temp, i;

	len = 0;

	len = strlen(s) - 1;
	for (i = 0; i < len; i++)
	{
		temp = s[len];
		s[len] = s[i];
		s[i] = temp;
		len--;
	}

}
