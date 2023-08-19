#include "main.h"

/**
 * print_diagonal- prints diagonal line
 * @n: number of times of character '\'
 */

void print_diagonal(int n)
{
	int count, space;

	if (n > 0)
	{
		for (count = 1; count <= n ; count++)
		{
			for (space = count; space >= 0; space--)
			{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
