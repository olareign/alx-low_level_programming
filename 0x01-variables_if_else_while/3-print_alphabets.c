#include <stdio.h>
#include <stdlib.h>
/**
 * main -print an alphabets in lowercase then in uppercase
 * Return: 0
*/
int main(void)
{
	int ch = "a";
	int CH = "A";

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		puchar(CH);
		CH++;
	}
	putchar("\n");
	return (0);
}

