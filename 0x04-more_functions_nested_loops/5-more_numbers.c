#include "main.h"

/**
 * more_numbers - To print multiple times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;

	int x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else
			{
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}