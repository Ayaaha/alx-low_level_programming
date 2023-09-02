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
	int min;
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
	else if (total_change >= 25)
	{
	total_change = total_change - 25;
	a++;
	}
	else if (total_change >= 10)
	{
	total_change = total_change - 10;
	b++;
	}
	else if (total_change >= 5)
	{
	total_change = total_change - 5;
	c++;
	}
	else if (total_change >= 2)
	{
	total_change = total_change - 2;
	d++;
	}
	else
	{
	total_change = total_change - 1;
	e++;
	}
	}
	min = a + b + c + d + e;
	printf("%d\n", min);
	total_change = atoi(argv[0]);
	return (0);
}
