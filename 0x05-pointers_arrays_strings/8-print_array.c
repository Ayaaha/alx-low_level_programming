#include "main.h"

/**
 * print_array -   prints  array
 * @a: array
 * @n: length of the array
 * Return: 1 Success
 */
void print_array(int *a, int n)
{
	for (n = 0; a[n] != '\0'; n++)
	{
		_putchar(a[n]);
		if (a[n] == '\0')
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}