#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number recived by the function
 * @v: value
 * Return: 1 Success
 */

int square(int n, int v);

int _sqrt_recursion(int n)
{
	int squ;

	squ = 1;

	squ = square(n, 1);
	return (squ);
}
/**
 * square -  helper recursion function
 * @v: value
 * @n: number recived by the function
 * Return: 1 Success
 */

int square(int n, int v)
{
	if (v * v == n)
	{
	return (v);
	}
	else if (v * v < n)
	{
	return (square(n, v + 1));
	}
	else
	{
	return (-1);
	}
}
