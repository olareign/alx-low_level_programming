#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
*/
int main(void)
{
	int numb;

	for (num = 0; num <= 9; num++)
	{
		putchar((numb % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
