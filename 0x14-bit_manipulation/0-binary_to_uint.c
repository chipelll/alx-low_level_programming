#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to string containg binary number
 *
 * Return: The decimal number if successful
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int t = 0;
	int i = 0, x = 1;

	if (b == NULL)
	{
		return (t);
	}
	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	while (i > 0)
	{
		i--;
		if (b[i] == '1')
		{
			t += x;
		}
		x *= 2;
	}
	return (t);
}
