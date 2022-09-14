#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0 if success
 */
void print_alphabet_x10(void)
{
int a;
int i;
for (a = 0; a <= 9; a++)
{
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
_putchar('\n');
}
}
