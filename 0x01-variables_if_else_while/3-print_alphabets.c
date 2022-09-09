#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 after printing function
 */
int main(void)
{
int ch;
int di;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (di = 'A'; di <= 'Z'; di++)
{
	putchar(di);
}
putchar('\n');
return (0);
}
