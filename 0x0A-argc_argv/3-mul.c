#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints multiplication of two numbers
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
