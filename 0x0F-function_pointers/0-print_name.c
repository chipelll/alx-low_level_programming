#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - To print the name
 * @name: Name of the person
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
