#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _putchar - Print character to the output
 * @ch: character
 * Return: int value
 * int _islower - checks for lowercase character
 * int _isalpha - checks for alphabetic character
 * int _abs - computes the absolute value of an integer
 * _isupper - checks for uppercase character
 * _isgigit  - checks for a digit
 * strlen -  returns the length of a string
 * @*s: length of string
 * _puts -  prints a string
 * @*str: string
 * *_strcpy copies the string pointed to by src
 * @*dest:  the buffer pointed to by dest.
 * @*src: he string pointed to by src
 * _atoi - convert a string to an integer.
 * strcat -  appends the src string to the dest string
 * _strncat -  appends the src string to the dest string
 * _strcmp - compares two strings
 * *string_toupper - changes all lowercase letters of a string to uppercas
 * *_strchr - function that locates a character in a string
 * *_strspn -  gets the length of a prefix substring
 * *_strpbrk - searches a string for any of a set of bytes
 * *_strstr -  locates a substring
 * *haystack - string
 * *needle - occurance of the substring
 */


int _putchar(char ch);
int _islower(int c);
int _isalpha(int c);
int _abs(int);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif
