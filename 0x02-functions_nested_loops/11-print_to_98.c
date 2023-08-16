#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: numbers to be printed
 *
 * Return: 1 Success
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
	for (count = n; n > 98; count--)
	printf("%d, ", n);
	}
		else
		{
		for (count = n; n < 98; count++)
		printf("%d, ", n);
		}

