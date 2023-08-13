#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: all possible different combinations of three digits
 *
 * Return:  0 (Success)
 */

int main(void)
{

	int a, b, c;

	a = 0;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 9; a++)
		{
			for (c = 0; c <= 9; c++)
			{
			if (a == b)
				continue;

		putchar('0' + b);
		putchar('0' + a);
		putchar('0' + c);
		putchar(44);
		putchar(' ');
			}
		}
	}
	return (0);
}
