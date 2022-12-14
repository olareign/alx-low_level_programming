#include "main.h"
/**
 * print_sign - function that print the sign of a number
 * @n: unsigned int value to be compared with ASCII value
 * Return: 1 if the the positive otherwise
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
