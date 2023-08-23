#include "main.h"

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 1 Success
 */

int main(void)
{
	int i;
	int random;

	srand(time(NULL));

	for (i = 1; i < 9000; i++)
	{
		random = rand() % 120;
		i = i + random;
		_putchar(random);
	}
	_putchar(2727 - i);
	return (0);
}
