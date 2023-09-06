#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: the target string
 * Return: 1 Success
 *
 */

char **strtow(char *str)`
{

		int i;

	if (height <= 0 || grid == NULL)
	{
	return;
	}
	if (height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
