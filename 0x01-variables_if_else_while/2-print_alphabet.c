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

	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
