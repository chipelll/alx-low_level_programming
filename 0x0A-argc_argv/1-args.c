#include <stdio.h>

/**
 * main - prints command line arguments
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 if error
 *
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
