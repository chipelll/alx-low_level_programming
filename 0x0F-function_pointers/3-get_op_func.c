#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - determines the function called
 * @s - operator
 *
 * Return: value of operation on success
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	while (i < 5)
	{
		if (ops[i].op == s)
		{
			(*get_op_func(s)) = &ops[i].f;
			return ((*get_op_func(s))(int, int));
		}
		i++;
	}
	return ('\0');
}

