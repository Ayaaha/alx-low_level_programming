#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *@b: integer
 * Return: 1 Success
 */

void *malloc_checked(unsigned int b)
{
	char *ptr = NULL;

	if (b == 0)
	{
		return (NULL);
	}
	ptr = malloc(b * sizeof(char));
	if (ptr == NULL)
	{
		exit(98);

	}
	else
	return (ptr);
}
