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

	a = 0;

do {
	for (b = 0; b <= 9; b++)
	{
		putchar('0' + b);

	for (c = 0; c <= 9; c++)
		putchar('0' + c);
	}
		putchar('0' + a);
		putchar(44);
		putchar(' ');
}
		while (a <= 9);
	return (0);
}
