#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @n: the number of elements of the array
 * @a: array
 * Return: 1 Success
 */

void reverse_array(int *a, int n)
{
		int i;

		i = n - 1;

		while (i >= 0)
		{
			printf("%d", a[i]);
			if (i ==  0)
			{
				break;
			}
			printf(", ");
			i--;
		}
			printf("\n");
}
