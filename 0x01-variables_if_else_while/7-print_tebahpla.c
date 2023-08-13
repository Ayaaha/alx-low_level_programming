#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description:the lowercase alphabet in reverse
 *
 * Return:  0 (Success)
 */

int main(void)
{

	char rev;

	for (rev = 'z'; alpha >= 'a'; --rev)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
