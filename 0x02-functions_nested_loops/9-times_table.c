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
	_putchar('0');
		for (c = 1; c <= 9; c++)
		{
			_putchar(',');
			_putchar(' ');
			t = r * c;
			if (t <= 9)
			{
			_putchar(t + '0');
			_putchar(' ');
			}
				else
				{
				_putchar('0' + t / 10);
				_putchar('0' + t % 10);
				}
		}
			_putchar('\n');
	}
}
