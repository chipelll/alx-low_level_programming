#include "main.h"

/**
 * _strcat - this function concatenates strings
 * _strlen - To return number of strings
 * @dest: the string to be concatenated with
 * @src: the string to be appended
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int x = 0, dlen;

dlen = _strlen(dest);
while (src[x] != '\0')
{
	dest[dlen++] = src[x++];
}
return (dest);
}
