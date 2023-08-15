#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: a program that prints _putchar
 *
 * Return: 0 Success
 */
int main(void)
{

	char ch[] = "_putchar\n";

	write(1, ch, 9);
	return (0);
}
