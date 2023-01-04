#include "main.h"

/**
 * print_to_98 - To print numbers to 98
 * @n: function argument
 *
 * Return: 0 if success
 */
void print_to_98(int n)
{
		if (n > 98)
		{
			do
			{
				n = n - 1;
				if (n > 100)
				{
					_putchar(n / 100 + '0');
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
				}
				else
				{
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
				}
				_putchar(',');
				_putchar(' ');
			}while(n <= 98);
			_putchar('\n');
		}
		if (n < 98)
		{
			do
			{
				n = n + 1;
				 _putchar(n / 10 + '0');
				 _putchar(n % 10 + '0');
				 _putchar(',');
			         _putchar(' ');
			 }while(n <= 98);
			_putchar('\n');
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
		}
}
