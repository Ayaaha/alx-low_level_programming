#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <string.h>

/**
 * _putchar - Print character to the output
 * Return: int value
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @*n: a pointer to an int as parameter
 * swap_int -  swaps the values of two integers
 * @*a:first value
 * @*b:second value
 * _strlen -  returns the length of a string
 * @*s: length of string
 * _puts -  prints a string
 * @*str: string
 * print_rev -  prints a string in reverse
 * rev_string - reverses a string
 * _puts2 -  prints a string
 */

int main(void);
int _putchar(char ch);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);

#endif
