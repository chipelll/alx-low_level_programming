#include <stdio.h>

/** 
 *main - entry point 
 *
 *Return: 0 after printing function 
 */ 
int main(void)
{	
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch !='q')
	{
	putchar(ch);
	}
}
putchar('\n'); 
return (0); 
}                 
