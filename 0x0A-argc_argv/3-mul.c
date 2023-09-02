#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two integer
 * @argc: integer
 * @argv: file name
 * Return: 1 Success
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
	printf("Error\n");
	return (0);
	}
	else
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d", mul);
	}
	return (0);
}
