#include <stdio.h>
#include <string.h>

/**
 *main - entry point
 *
 *Return: 0 if program is a success
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
	putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
