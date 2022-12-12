#include <stdio.h>
#include <stdlib.h>
/**
 * main -print all the single digit of base 10 starting from 0
 * Return: 0
*/
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
