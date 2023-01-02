#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory area.
 * @b: constant to fill the memory with.
 * @n: bytes of the memory area to be filled.
 * Return: a pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
