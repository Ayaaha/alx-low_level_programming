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
		for (b = a; b <= 99; b++)
		{
		if (a != b)
		{
		putchar('0' + a / 10);
		putchar('0' + a % 10);
		putchar(' ');
		putchar('0' + b / 10);
		putchar('0' + b % 10);
		if (a == 98 && b == 99)
		break;
		putchar(44);
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
