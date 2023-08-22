#include "main.h"

/**
 * puts_half -   prints  a string
 * @str:string
 * Return: 1 Success
 */

void puts_half(char *str)
{
	int i;

	i = strlen(str)-1;
	i = i / 2;
	while (str[i] != '\0')
	{
		++i;
		_putchar(str[i]);
	}
	_putchar('\n');
}
