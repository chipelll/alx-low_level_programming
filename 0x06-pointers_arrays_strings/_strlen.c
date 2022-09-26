#include <stdio.h>
#include "main.h"


int _strlen(char *s)
  
{
  
  int i = 0, len = 0;
  

  
  while (s[i] != '\0')
    
    {
      
      i++;
      
      len++;
      
    }
  
  return (len);
  
}
