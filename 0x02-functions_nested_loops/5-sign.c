#include "main.h"
/**
 * print_sign - function that print the sign of a number
 * @n: unsigned int value to be compared with ASCII value
 * Return: 1 if the the positive otherwise
*/
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');								}
	return (test);
}
