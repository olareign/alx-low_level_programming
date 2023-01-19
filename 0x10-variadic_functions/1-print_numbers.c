#include "variadic_functions.h"

/**
 * print_numbers - prints num
 * @separator: pointer param
 * @n: param
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i i++)
	{
		printf("%d", va_arg(valist, int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}
	print("\n");
	va_end(valist);
}
