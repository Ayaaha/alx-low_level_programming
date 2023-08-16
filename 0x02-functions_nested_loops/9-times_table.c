#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 1 Success
 */

void times_table(void)
{
	int r, c, t;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			t = r * c;
			_putchar('0' + t);
			_putchar(',');
			_putchar(' ');
		}
			_putchar('\n');
	}
}
