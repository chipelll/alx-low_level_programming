#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - To print variable arguments
 * @separator: Seperates the arguments
 * @n: number of arguments
 *
 * Return: numbers passed as argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (*separator != '\0')
		{
			printf("%d", va_arg(ap, int));
		}
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
