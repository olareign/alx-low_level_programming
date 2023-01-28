#include <stdio.h>
/**
 * main - print  all possible combination of the digit
 * Return: 0
*/
int main(void)
{
	int digit1 = 0; digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{ 
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; igit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');
				if (digit1 == 7 && digit2 == 8 && digits3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putcher('\n');
	
	return(0);
