#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: the string to be counted
 *
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	static int len = 0;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		_strlen_recursion(s + 1);
		++len;
	}
	
	return (len);
}
