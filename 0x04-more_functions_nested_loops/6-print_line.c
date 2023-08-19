#include "main.h"

/**
 * print_line - prints stright line
 * @n: number of times of character _
 * Return: 1 Success
 */

void print_line(int n)
{
	int count;

	for (count = 0; count <= n ; count++)
	{
		if (n <= 0)
		_putchar('\n');
			else
			_putchar('_');
	}
	_putchar('\n');
}
