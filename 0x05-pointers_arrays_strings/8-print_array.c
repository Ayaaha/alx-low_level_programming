#include "main.h"

/**
 * print_array -   prints  array
 * @a: array
 * @n: length of the array
 * Return: 1 Success
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m != n - 1)
		printf("%d, ", a[m]);
		else
		printf("%d", a[m]);
	}
	printf("\n");
}
