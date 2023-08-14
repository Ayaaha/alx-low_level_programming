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
		for (b = 1; b <= 9; b++)
		{
		for (c = 2; c <= 9; c++)
		{
		for (d = 3; d <= 9; d++)
		{
		if ((a != b && b != c && c != d)
		if (a < b && b < c && c < d)
		putchar('0' + a);
		putchar('0' + b);
		putchar(' ');
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
