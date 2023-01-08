#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: THe int to be operated upon
 * Return: 0
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
