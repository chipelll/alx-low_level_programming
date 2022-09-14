#include "main.h"

/**
 * main - prints alphabets in lowercase and entry point
 *
 * Return: 0 if program is a success
 */
void print_alphabet(void);       
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
_putchar('\n');
return (0);
}
