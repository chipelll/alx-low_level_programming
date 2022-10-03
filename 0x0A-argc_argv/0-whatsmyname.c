#include <stdio.h>

/**
 * main - prints its name
 * @argc: - argument count
 * @argv: - argument list
 *
 * Return: 1 if success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[--argc]);

	return (0);
}
