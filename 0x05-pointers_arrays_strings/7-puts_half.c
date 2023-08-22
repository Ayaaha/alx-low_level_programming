#include "main.h"

/**
 * puts_half -   prints  a string
 * @str:string
 * Return: 1 Success
 */

void puts_half(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
