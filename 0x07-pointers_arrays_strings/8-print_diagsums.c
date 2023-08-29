#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: array[][]
 * @size: size of the array
 * Return: 1 Success
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
			sum1 = sum1 + a[i * size + i];
	}
			printf("%d", sum1);
			printf(", ");
		for (j = size - 1; j >= 0; j--)
		{
			sum2 = sum2 + a[j * size + (size - 1 - j)];
		}
			printf("%d", sum2);
			printf("\n");
}
