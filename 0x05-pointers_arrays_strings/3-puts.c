#include "main.h"

/**
 * _puts - prints a string
 * @str: function argument
 *
 * Return: a non negative number on success
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
