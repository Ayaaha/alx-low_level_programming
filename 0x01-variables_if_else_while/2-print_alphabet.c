#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description:alphabet in lowercase
 *
 * Return:  0 (Success)
 */

int main(void)
{

	char alpha = 'a';

	for (alpha = 0; alpha <= 26; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
