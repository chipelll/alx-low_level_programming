#include <stdio.h>

/**
 *main - entry point
*
*Return: 0 if program is a success
*/
int main(void)
{
int ch;
for (ch = 0; ch <= 9; ch++)
{
	putchar(ch % 10 + '0');
}
putchar('\n');
return (0);
}
