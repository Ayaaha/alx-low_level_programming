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

	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		if ((a != b) && (a < b))
		{
		putchar('0' + a);
		putchar('0' + b);
		if (a == 8 && b == 9)
		break;
		putchar(44);
		putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
