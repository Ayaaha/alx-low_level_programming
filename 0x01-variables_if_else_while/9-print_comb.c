#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: all possible combinations of single-digit numbers
 *
 * Return:  0 (Success)
 */

int main(void)
{

	int cb;

	for (cb = 0; cb <= 9; ++cb)
	{
		putchar('0' + cb);
		if (cb == 9)
			break;
		putchar(44);
		putchar(' ');
	}
		putchar('\n');
	return (0);
}
