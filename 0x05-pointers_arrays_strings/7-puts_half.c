#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: string pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2;
	}

	for (; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
