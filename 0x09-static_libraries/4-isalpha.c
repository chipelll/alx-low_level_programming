#include "main.h"

/**
 * _isalpha - To check for alphabets
 * @c: function argument
 *
 * Return: 1 if c is letter, 0 if otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
return (0);
}
