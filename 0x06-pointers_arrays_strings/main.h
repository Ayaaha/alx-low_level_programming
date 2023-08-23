#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <string.h>
/**
 * main - main function
 * Return: int value
 * _putchar - prints character in the  output
 * *_strcat -  appends the src string to the dest string
 * @*src:the string pointed to by src
 * @*dest: destination pointer
 * *_strncat -  appends the src string to the dest string
 * @*n: n bytes
 * *_strncpy -  copies a string.
 */

int main(void);
int _putchar(char ch);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);

#endif
