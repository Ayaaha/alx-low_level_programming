#include "main.h"

/**
 * puts_half -   prints  a string
 * @str:string
 * Return: 1 Success
 */

void puts_half(char *str)
{
	int i;

	i = strlen(str);
	i = i / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');
}
