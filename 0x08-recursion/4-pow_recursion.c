#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: value
 * @y:power of x value
 * Return: 1 Success
 */

int _pow_recursion(int x, int y)
{
	int pow;

	pow = 1;

	if (y < 0)
	return (-1);
		else if (y == 0)
		return (1);
			else
			{
			pow = x * _pow_recursion(x, y - 1);
			return (pow);
			}
}
