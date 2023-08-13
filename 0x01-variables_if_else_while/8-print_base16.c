#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description:all the numbers of base 16 in lowercase
 *
 * Return:  0 (Success)
 */

int main(void)
{

	char hex, ch;

	for (hex = 0; hex <= 9; hex++)
	{
		putchar(hex);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
