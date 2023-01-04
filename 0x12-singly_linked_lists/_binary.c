#include "main.h"
#include <unistd.h>


int _binary(int n)
{
	unsigned int num = n;

	int len = 0;

	if (!num || n < 0)

	{
		_putchar('0' + 0);

		return (1);

	}

	if ((num / 2) > 0)

	{

		_putint((num / 2));

	}

	_putchar('0' + (num % 2));


	while (n != 0)

	{

		n /= 2;

		len++;

	}

	return (len);
}
