#include <stdio.h>

/**
 *main - entry point
 *
 *Return - 0 if program is successful
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}