#include "main.h"

/**
 * 24_hours - To print time
 *
 * Return: 0 if success
 */
void hr_and_min_less_than_10(int h, int m);
void hr10_less_min10_greater(int h, int m);
void hr10_greater_min10_less(int h, int m);
void hr10_greater_min10_greater(int h, int m);

void jack_bauer(void)
{
	int h = 0, m;
	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			if ((m < 10) && (h < 10))
				hr_and_min_less_than_10(h, m);
			else if ((m >= 10) && (h < 10))
			{
				hr10_less_min10_greater(h, m);
			}
			else if ((m < 10) && (h >= 10))
			{
				hr10_greater_min10_less(h, m);
			}
			else
			{
				hr10_greater_min10_greater(h, m);
			}
			m++;
			_putchar('\n');
		}
		h++;
	}

}
void hr10_greater_min10_greater(int h, int m)
{
	_putchar('0' + h / 10);
	_putchar('0' + h % 10);
	_putchar(':');
	_putchar('0' + 0);
	_putchar('0' + m);
}
void hr10_less_min10_greater(int h, int m)
{
	_putchar('0' + 0);
	_putchar('0' + h);
	_putchar(':');
	_putchar('0' + m / 10);
	_putchar('0' + m % 10);
}
void hr_and_min_less_than_10(int h, int m)
{
	_putchar('0' + 0);
	_putchar('0' + h);
	_putchar(':');
	_putchar('0' + 0);
	_putchar('0' + m);
}
