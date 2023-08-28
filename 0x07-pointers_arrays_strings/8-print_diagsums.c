#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: array[][]
 * @size: size of the array
 * Return: 1 Success
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum;

	for (i = 0; i < size; i++)
	{
			sum = a[i] + a[i + size];
	}
			printf("%d", sum);
			printf("\n");
		for (j = size; j >= 0; j--)
		{
			sum = a[j] + a[j + size];
		}
			printf("%d", sum);
			printf("\n");
}
