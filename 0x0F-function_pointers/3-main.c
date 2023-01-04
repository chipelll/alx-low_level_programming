#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - To take inputs and display outputs
 * @argc: argument count
 * @argc: argument name
 * 
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	int p;
//	if (argv[2] == '/' (&&) argv[3] == 0 || argv[2] == '%' (&&) argv[3] == 0)
//	{
//		printf("Error\n");
//		exit(100);
//	}
	if (argc == 4)
	{
		p = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf ("%d\n", p);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	if (p == '\0')
	{
		printf ("Error\n");
		exit(99);
	}
	return (0);
}
