#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max:max value
 * Return: 1 Success
 */

int *array_range(int min, int max)
{
	int *array;
	int diff, i;

	if (min > max)
	{
	return (NULL);
	}
	diff = max - min + 1;
	array = malloc(diff * sizeof(int));
	if (array == NULL)
	{
	return (NULL);
	}
	else
	{
		for (i = 0; i < diff; i++)
		{
			array[i] = min + i;
		}

		return (array);
	}
}
