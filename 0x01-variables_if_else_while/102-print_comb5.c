#include <stdio.h>

/**
 *main - entry point
 *
 *Return: - 0 if program is a success
 */
int main(void)
{
int i;
int r;
i = 0;
for (i = i; i <= 98; i++)
{
	for (r = i + 1; r <= 99; r++)
	{
		putchar(i / 10 % 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(r / 10 % 10 + '0');
		putchar(r % 10 + '0');
			if ((i == 98) && (r == 99))
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
