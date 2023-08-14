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

	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
		if (a != b)
		putchar('0' + a);
		putchar(' ');
		putchar('0' + b);
		break;
		putchar(44);
		putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
