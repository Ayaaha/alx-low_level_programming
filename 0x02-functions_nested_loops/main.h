#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

/**
 * _putchar - Print character to the output
 * Return: int value
 * print_alphabet -  prints the alphabet, in lowercase
 * print_alphabet -  prints the alphabet 10 times, in lowercase
 * int _islower - checks for lowercase character
 * int _isalpha - checks for alphabetic character
 * int print_sign - int print_sign
 * int _abs - computes the absolute value of an integer
 * int print_last_digit - prints the last digit of a number
 * void jack_bauer - prints every minute of the day
 */

int main(void);
int _putchar(char ch);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);

#endif
