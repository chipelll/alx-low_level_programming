#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 if program is a success
 */
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
