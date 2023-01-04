#include "main.h"
#include <stddef.h> 

int _strlen_recursion(char *s)
{ 
static int count=0; 

if(*s != '\0')
{
	count++; 
	_strlen_recursion(++s);
}
return (count);
} 
