#include "main.h"

/**
 * free_grid - free the previous grid
 * @grid: two dimenstional array
 * @height: the height of the array
 * Return: 1 Success
 *
 */

void free_grid(int **grid, int height)
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
	return (0);
}
