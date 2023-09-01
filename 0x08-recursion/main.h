#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <string.h>

/**
 * main - main function
 * Return: int value
 * _putchar - prints character in the  output
 * _puts_recursion -  prints a string
 * @*s: string
 * _print_rev_recursion -  prints a string in reverse
 * _strlen_recursion - returns the length of a string
 * factorial - returns the factorial of a given number
 * _pow_recursion -  returns the value of x raised to the power of y
 * _sqrt_recursion - eturns the natural square root of a number
 * square - helper recursion function
 * is_prime_number -  returns 1 if the input integer is a prime number
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * wildcmp - unction that compares two strings and returns 1
 * if the strings can be considered identical, otherwise
 */

int main(void);
int _putchar(char ch);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int square(int n, int v);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
