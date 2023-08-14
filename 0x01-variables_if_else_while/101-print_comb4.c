#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: all possible different combinations of two digits
 *
 * Return:  0 (Success)
 */

int main(void)
{

	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
		for (c = 2; c <= 9; c++)
		if ((a != b) && (a < b))
		{
		putchar('0' + a);
		putchar('0' + b);
		putchar('0' + c);
		if (a == 7 && b == 8 && c == 9)
		break;
		putchar(44);
		putchar(' ');
		}
		}
	}
		putchar('\n');
	return (0);
}
