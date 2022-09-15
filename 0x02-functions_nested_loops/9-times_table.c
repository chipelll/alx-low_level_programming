#include "main.h"

/**
 * times_table - To print times table
 *
 * Return: 0 if success
 */
void times_table(void)
{
int i;
int r;
int x;
for (i = 0; i <= 9; i++)
{
	for (r = 0; r <= 9; r++)
	{
		x = i * r;
		if (x > 9)
		{
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
		}
		else
		{
			_putchar('0' + x / 10);
		}
		if (r != 9)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}
}
