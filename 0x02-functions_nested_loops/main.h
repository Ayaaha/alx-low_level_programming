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
 * void times_table -  prints the 9 times table
 * int add - adds two integers and returns the result
 * void print_to_98 - prints all natural numbers from n to 98
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
void times_table(void);
int add(int, int);
void print_to_98(int n);
#endif
