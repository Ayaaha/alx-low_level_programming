#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 Success
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, total_len;
	char *total_string;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s1 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;
	total_string = malloc((total_len + 1) * sizeof(char));
	if (total_string == NULL)
	{
	return (NULL);
	}
	else
	{
		for (i = 0; i <= len1; i++)
		{
		total_string[i] = s1[i];
		}
		for (j = 0; j <= len2; j++)
		{
		total_string[i + j] = s2[j];
		}
		total_string[total_len] = '\0';
	return (total_string);
	}
}
