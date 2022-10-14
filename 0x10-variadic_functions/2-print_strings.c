#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - To print strings to ouput
 * @separator: seperates strings printed
 * @n: number of arguments
 *
 * Return: strings passed on function call
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (*str == '\0')
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (*separator != '\0' && i != n - 1)
		{
			printf("%s", separator);
		}
		else
		{
			continue;
		}
	}
	printf("\n");
	va_end(ap);
}
