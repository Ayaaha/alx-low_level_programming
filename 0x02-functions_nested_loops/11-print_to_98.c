#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: numbers to be printed
 *
 * Return: 1 Success
 */
void print_to_98(int n)
{
	printf("please enter first number");
	scanf("%d", &n);
		do {
		printf("%d", n);
		printf(", ");
		} while (n <= 98);
}
