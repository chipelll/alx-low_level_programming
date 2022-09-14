#include "main.h"

/**
 * print_sign - To print sign of a number
 * @n: function argument
 *
 * Return: 1+ if n is greater than 0, 0 if zero and 1- if less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
if (n < 0)
{
	_putchar('-');
	return (-1);
}
_putchar('0');
return (0);
}
