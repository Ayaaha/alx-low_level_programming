#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @d: last digit of the number
 * @n: the number
 * Return: 1 Success
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	_putchar(48 + d);
	return (d);
}

