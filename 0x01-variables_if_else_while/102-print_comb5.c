#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: all possible combinations of two two-digit numbers
 *
 * Return:  0 (Success)
 */

int main(void)
{

	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
		if (a != b && a < b)
		putchar('0' + a);
		putchar('0' + b);
		putchar(' ');
		for (c = 0; c <= 9; c++)
		{
		for (d = 0; d <= 9; d++)
		{
		if (c != d && c < d)
		putchar('0' + c);
		putchar('0' + d);
		if (a == 9 && b == 8 && c == 9 && d == 9)
		break;
		putchar(44);
		putchar(' ');
		}
		}
		}
	}
		putchar('\n');
	return (0);
}
