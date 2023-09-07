#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @size: integer number
 * @nmemb: number of elements
 * Return: 1 Success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
	return (NULL);
	}
	else
	{
		memset(array, 0, (nmemb * size));
		return (array);
	}
}
