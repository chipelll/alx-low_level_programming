#include <stdio.h>

/** 
 *main - entry point 
 *
 *Return: 0 after printing function 
 */ 
int main(void)
{	
int ch;
int di;
int ej;
for (ch = 'a'; ch <= 'd'; ch++)
{
	putchar(ch); 
}
for (di = 'f'; di <=  'p'; di++)
{
	putchar(di);
}
for (ej = 'r'; ej <= 'z'; ej++)
{
	putchar(ej);
}
putchar('\n'); 
return (0); 
}                 
