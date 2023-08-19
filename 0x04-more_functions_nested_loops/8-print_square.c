#include "main.h"

/**
 * print_square - prints a square
 * @size: number of times of character #
 * Return: 1 Success
 */

void print_square(int size)
{
	int rows, col;

	if (size > 0)
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (col = 1; col <= size; col++)
			{
			_putchar('#');
			_putchar('\n');
			}
		}
	}
				else
				_putchar('\n');
}
