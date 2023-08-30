#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: 1 Success
 */

void _print_rev_recursion(char *s)
{
	int len;

	len = strlen(s);
	if (s[len - 1] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
