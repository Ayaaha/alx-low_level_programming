#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer number
 * Return: 1 Success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, len1, len2, total_len;
	char *total_string;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	total_len = len1 + len2;
	else
	{
	total_len = len1 + n;
	}
	total_string = (char *) malloc((total_len + 1) * sizeof(char));
	if (total_string == NULL)
	{
	return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
		total_string[i] = s1[i];
		}
		for (j = 0; j < n && s2[j] != '\0'; j++)
		{
		total_string[i + j] = s2[j];
		}
		total_string[i = j] = '\0';
	return (total_string);
	}
}
