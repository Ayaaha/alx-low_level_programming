#include "main.h"

/**
 * *_strstr -  locates a substring
 * @haystack: string
 * @needle: occurrence of the substring
 * Return: 1 Success
 */

char *_strstr(char *haystack, char *needle)
{
	char *res = strstr(haystack, needle);
			return (res);
}
