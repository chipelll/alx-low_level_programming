#include <stdio.h>

/**
 * main - prints out the arguments
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
