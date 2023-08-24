#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @n: the number of elements of the array
 * @a: array
 * Return: 1 Success
 */

void reverse_array(int *a, int n)
{
		int i, j, temp;

		i = n - 1;
		j = 0;

		while (j < i)
		{
		temp =	a[i];
		a[i] = a[j];
		a[j] = temp;
			j++;
			i--;
		}
}
