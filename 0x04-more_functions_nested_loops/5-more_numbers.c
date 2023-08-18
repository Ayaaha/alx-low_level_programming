#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 1 Success
 */

void more_numbers(void)
{
	int i, num;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
	_putchar('\n');
	}
}
