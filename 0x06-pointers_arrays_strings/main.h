#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - main function
 * Return: int value
 * _putchar - prints character in the  output
 * *_strcat -  appends the src string to the dest string
 * @*src:the string pointed to by src
 * @*dest: destination pointer
 * *_strncat -  appends the src string to the dest string
 * *_strncpy -  copies a string
 * _strcmp - compares two strings
 * @*s1: first string
 * @*s2: second string
 * @*a: resversed array
 * *string_toupper - changes all lowercase letters of a string to uppercase
 */

int main(void);
int _putchar(char ch);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);

#endif
