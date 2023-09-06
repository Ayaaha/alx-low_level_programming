#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: 1 Success
 *
 */

int **alloc_grid(int width, int height)
{
		int **g;
		int i, j;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	g = (int **) malloc(height * sizeof(int *));
	if (g == NULL)
	{
	return (NULL);
	}
	if (width > 0 && height > 0)
	{
		for (i = 0; i < height; i++)
		{
		g[i] = (int *) malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
		for (j = 0; j < i; j++)
		{
			free(g[j]);
			free(g);
			return (NULL);
		}
		}
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
		}
		}
	return (g);
}
