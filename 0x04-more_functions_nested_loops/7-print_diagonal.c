#include "main.h"

/**
 * print_diagonal- prints diagonal line
 * @n: number of times of character '\'
 */

void print_diagonal(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 1; count <= n ; count++)
		{
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
