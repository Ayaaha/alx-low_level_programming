#include "main.h"

/**
 * _sqrt_recursion - eturns the natural square root of a number
 * @n: number recived by the function
 * Return: 1 Success
 */

int _sqrt_recursion(int n)
{
	int squ;

	squ = 1;

	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	squ = _sqrt_recursion(n - 1);
	if (squ * squ == n)
	{
	return (squ);
	}
	else
	{
	return (-1);
	}
	}
}
