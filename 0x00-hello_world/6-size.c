#include <stdio.h>
/**
 * main -print the size of the type of a computer
 * code by olareign
 * Return: 0
*/
int main(void)
{
	int char a;
	int int b;
	int long int c;
	int long long int d;
	int float f;

	printf("Size of char: %lu bytes(S)\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu bytes(S)\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
}
