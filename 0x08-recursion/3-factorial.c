#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number
 * Return: 1 Success
 */

int factorial(int n)
{
	int fac;

	fac = 1;

	if (n < 0)
	return (-1);
		else if (n == 0)
		return (1);
			else
			{
			fac = n *  factorial(n - 1);
			return (fac);
			}
}
