#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * Return: 1 Success
 */

char *rot13(char *)
{
	int i, j;
	char *a = cod;
	char c[] = {'A', 'E', 'O', 'T', 'L'};
	int set = 'a' - 'A';

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
		if (a[i] == c[j] || a[i] == c[j] + set)
		{
			a[i] = '0' + (4 - j);
			break;
		
		}
		}
	return (cod);
	}
}
