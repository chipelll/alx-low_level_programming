#include <stdio.h>
#include <string.h>  

/**
 *main - entry point
 *
 *Return: 0 if program is a success
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
	putchar(i + '0');
	putchar(',');
	putchar('\t');
}
putchar('\n');
return (0);
}
