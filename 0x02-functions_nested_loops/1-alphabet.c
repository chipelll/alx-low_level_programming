#include "main.h"

/**
 * print_alphabet - prints all lowercase alphabets
 *
 * Return: 0 if program is a success
 */
void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
_putchar('\n');
}

