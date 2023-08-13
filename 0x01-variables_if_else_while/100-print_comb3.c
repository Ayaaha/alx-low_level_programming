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

	char a, b, c, d;

	for (a = 0; a <= 9; a++)
		putchar('0' + a);

	for (b = 1; b <= 9; b++)
		putchar('0' + b);

	for (c = 2; c <= 9; c++)
		putchar('0' + c);

	for (d = 3; d <= 9; d++)
		putchar('0' + d);
		if (a == 9)
			break;
		putchar(44);
		putchar(' ');
	return (0);
}
