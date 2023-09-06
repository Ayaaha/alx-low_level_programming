#include "main.h"

/**
 * *argstostr -  concatenates all the arguments of your program
 * @ac: arguments account
 * @av: argument value
 * Return: 1 Success
 *
 */

char *argstostr(int ac, char **av)
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
