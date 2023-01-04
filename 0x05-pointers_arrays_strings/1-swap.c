#include "main.h"

/**
 * swap_int - To swap integers
 * @a: function argument
 * @b: function argument
 *
 * Return: 0 if program runs seccessfully
 */

void swap_int(int *a, int *b)
{
	int c;

	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
