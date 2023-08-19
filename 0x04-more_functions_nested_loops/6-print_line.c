#include "main.h"

/**
 * print_line - prints stright line
 * @n: number of times of character _
 * Return: 1 Success
 */

void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 1; count <= n ; count++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
				else
				_putchar('\n');
}
