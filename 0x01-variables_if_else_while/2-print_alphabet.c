#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 after printing function
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'b'; ch++)
{
	for (ch = 'A'; ch <= 'B'; ch++)
	{
	putchar(ch);
	}
}
putchar('\n');
return (0);
}
