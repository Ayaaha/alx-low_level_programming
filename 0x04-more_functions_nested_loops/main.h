#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

/**
 * _putchar - Print character to the output
 * Return: int value
 * _isupper - checks for uppercase character
 *  _isgigit  - checks for a digit
 *  mul  - multiply two integar numbers
 *  print_numbers - prints the numbers from 0 to 9
 *  print_most_numbers - prints the numbers from 0 to 9 except 2 and 4
 *  more_numbers - prints 10 times the numbers, from 0 to 14
 *  print_line - draw stright line
 */

int main(void);
int _putchar(char ch);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
#endif
