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
int j;
for (i = 0; i <= 7; i++)
{
	for (r = i + 1; r <= 8; r++)
	{
		for (j = r + 1; j <= 9; j++ )
		{
			if (i < r && (r < j || r > j))
			{
			putchar(i + '0');
			putchar(r + '0');
			putchar(j + '0');
			}
			if ((i == 7) && (r == 8) && (j == 9))
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
}
putchar('\n');
return (0);
}

