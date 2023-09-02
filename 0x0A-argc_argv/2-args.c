#include <stdio.h>

/**
 * main - prints all argument it recived
 * @argc: integer
 * @argv: file name
 * Return: 1 Success
 */

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i <= argc; i++)
	{
	printf("%s\n",  argv[i]);
	}
	return (0);

}
