#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - main function
 * Return: int value
 * _putchar - prints character in the  output
 * *create_array - creates an array of chars
 * *_strdup - returns a pointer to a newly allocated space in memory
 * *_str_concat - concatenates two strings
 */

int main(void);
int _putchar(char ch);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
#endif
