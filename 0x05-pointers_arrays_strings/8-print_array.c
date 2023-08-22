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

	m = n - 1;
	for (m = 0; a[m] != '\0'; m++)
	{
		printf("%d, ", a[m]);
	}
	printf("\n");
}
