#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <string.h>

/**
 * main - main function
 * Return: int value
 * _putchar - prints character in the  output
 * *_memset -  fills memory with a constant byte
 * @*s: the memory area pointed to by s
 * *_memcpy - copies memory area
 * @*dest: destination memory area
 * @*src: source memory area
 * *_strchr - function that locates a character in a string
 * _strspn -  gets the length of a prefix substring
 * *_strpbrk - searches a string for any of a set of bytes
 * *_strstr -  locates a substring
 * *haystack - string
 * *needle - occurance of the substring
 * @a: array [8][8]
 */

int main(void);
int _putchar(char ch);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);

#endif
