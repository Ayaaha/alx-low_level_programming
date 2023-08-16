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
			if (t <= 9)
			{
			_putchar('0' + t);
			putchar(' ');
			}
				else
				{
				_putchar('0' + t / 10);
				_putchar('0' + t % 10);
				}
			if (c == 9)
			break;
			_putchar(',');
			_putchar(' ');
		}
			_putchar('\n');
	}
}