#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char:%c.\n", sizeof(c));
	printf("Size of a int:%d.\n", sizeof(i));
	printf("Size of a long int:%ld.\n", sizeof(lic));
	printf("Size of a long long int:%lld.\n", sizeof(lli));
	printf("Size of a float:%f.\n", sizeof(f));

	return (0);
}
