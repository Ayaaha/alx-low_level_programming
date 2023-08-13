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

	char hex;

	for (hex = 0x1; hex <= 0x16; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
