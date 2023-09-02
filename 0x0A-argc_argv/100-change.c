#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints  prints the minimum number of coins
 * @argc: integer
 * @argv: file name
 * Return: 1 Success
 */

int main(int argc, char *argv[])
{
	int min, i;
	int total_change;
	int changes[5] = {25, 10, 5, 2, 1};

	min = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	total_change = atoi(argv[1]);
	if (total_change < 0)
	{
	printf("0\n");
	return (0);
	}
	for (i = 0; i <= 4; i++)
	{
	while (total_change >= changes[i])
	{
		total_change = total_change - changes[i];
		min++;
	}
	}
	printf("%d\n", min);
	return (0);
}
