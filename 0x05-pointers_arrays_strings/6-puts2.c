#include "main.h"

/**
 * puts2 -   prints  a string
 * @str:string
 * Return: 1 Success
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
