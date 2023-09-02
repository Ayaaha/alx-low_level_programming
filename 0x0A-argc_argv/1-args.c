#include <stdio.h>

/**
 * main - prints aprogram name
 * @argc: integer
 * @argv: file name
 * Return: 1 Success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%d\n", argc - 1);
	return (0);

}
