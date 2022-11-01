#include <unistd.h>

/**
 * _putchar - prints a character to the standard output
 * @c: character to print
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
