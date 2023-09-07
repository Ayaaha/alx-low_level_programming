#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - main function
 * Return: int value
 * _putchar - prints character in the  output
 * *malloc_checked - function that allocates memory using malloc
 * *string_nconcat - function that concatenates two strings
 * *_calloc -  allocates memory for an array, using malloc
 * *array_range - creates an array of integers
 */

int main(void);
int _putchar(char ch);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
