#include "main.h"

/**
 * *create_array - creates an array of char
 * @size: size oof the array 
 * @c: character
 * Return: 1 Success
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);

	}
	else
	{
		for (i =0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
