#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number recived by the function
 * @div: divisor
 * Return: 1 Success
 */

int prime(int n, int div);

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - helper recursion function
 * @n: number recived by the function
 * @div: divisor
 * Return: 1 Success
 */

int prime(int n, int div)
{
	if (n < 2)
	{
	return (0);
	}
	else if (div * div > n)
	{
	return (1);
	}
	else if (n % div == 0)
	{
	return (0);
	}
	else
	{
	return (prime(n, div + 1));
	}
}
