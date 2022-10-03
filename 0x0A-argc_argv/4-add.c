#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two or ore numbers
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;


	if (argc > 1)
	{
		for (i = 0 ; i < argc; i++)
		{
			if (*argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
