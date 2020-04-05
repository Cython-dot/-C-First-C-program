#include <stdio.h>
#include <stdlib.h>

// This function enables the user to find out what is the length of a specific string of characters. 

int str_lenght(const char *str)
{
    int i = 0;
    
   while(str[i] != '\0')
       ++i;
    
    return i;
}

