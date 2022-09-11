#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 if program is a success
 */
int main(void)
{
int i;
int r;
for (i = 0; i <=8 ; i++)
{
	for (r = i + 1; r <= 9; r++)
	{
		if (r > i && r != i)
		{
			putchar(i + '0');
			putchar(r + '0');
		}
		if ((i == 8) && (r == 9))
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
