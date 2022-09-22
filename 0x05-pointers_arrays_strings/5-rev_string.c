#include "main.h"

/**
 * rev_string - To reverse a string
 * @s: function argument
 *
 * Return: 0 if succeess
 */

void rev_string(char *s)
{
	int i = 0, b = 0;

	char c;

	for (; s[i] != 0; i++)
	{
	}
	while (b < i--)
	{
		c = s[b];
		s[b++] = s[i];
		s[i] = c;
	}
}
