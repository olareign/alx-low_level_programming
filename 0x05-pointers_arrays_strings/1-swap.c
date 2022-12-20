#include <stdio.h>
#include "main.h"

/**
 * swap_in - a function thats swap the value of two integers.
 * @a: first value to be provided
 * @b: Second parameter to be provided
 * int c: addressed the swapped value will be sent to
 * Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
