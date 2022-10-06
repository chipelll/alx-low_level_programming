#include "main.h"

/**
 * _islower - To search for lowercase
 * @c: function argument
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
return (0);
}
