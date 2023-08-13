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

	for (cb = 0; cb <= 9; cb++)
	{
		putchar('0' + cb);
		putchar('\t');
		putchar(44);
	}
		putchar('\n');
	return (0);
}
