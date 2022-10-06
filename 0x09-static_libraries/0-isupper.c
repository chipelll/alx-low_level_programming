#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: function parameter
 *
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
