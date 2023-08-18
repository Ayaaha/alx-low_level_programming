#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 1 Success
 */

void more_numbers(void)
{
	int i, num, num1;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			num1 = num;
				if (num > 9)
				{
				_putchar(num + '0');
				num1 = num % 10;
				}
				_putchar(num1 + '0');
		}
	_putchar('\n');
	}
}
