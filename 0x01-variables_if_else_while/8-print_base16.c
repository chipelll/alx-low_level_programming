#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 if program is a success
 */
int main(void)
{
int ch;
int di;
for (ch = 0; ch <= 9; ch++)
{
	putchar(ch % 10 + '0');
}
for (di = 'a'; di <= 'f'; di++)
{
	putchar(di);
}
putchar('\n');
return (0);
}
