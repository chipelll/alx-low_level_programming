#include "main.h"

/**
 * print_rev - To print strings in reverse
 * @s: function argument
 *
 * Return: 0 if success
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	while (i)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}


