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
			if (*str == '\0')
			break;
		str = str + 2;
	}
	_putchar('\n');
}
