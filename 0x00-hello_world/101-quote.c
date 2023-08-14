#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{

	char dora[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, dora, 59);
	return (1);
}
