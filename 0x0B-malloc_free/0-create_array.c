#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of character and initializes it
 * @size: size of an array
 * @c: the character to initialize it with
 *
 * Return: 0 if program fails
 */

char *create_array{unsigned int size, char c}
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;

	}
	return (ptr);
}
