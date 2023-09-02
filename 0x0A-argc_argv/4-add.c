#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints addition of two integer
 * @argc: integer
 * @argv: file name
 * Return: 1 Success
 */

int main(int argc, char *argv[])
{
	int i, j, n, sum;

	n = 0;
	sum = 0;
	j =0;

	if (argc == 1)
	{
	printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
	while (argv[i][j] != '\0')
	{
	if (argv[i][j] < '0' || argv[i][j] > '9')
	{
	printf("Error\n");
	return (1);
	}
	j++;
	}
	n = atoi(argv[i]);
	if (n > 0)
	{
	sum = sum + n;
	}
	}
	printf("%d\n", sum);
	}
	return (0);
}
