#include <stdio.h>
#include <stdlib.h>

// This function enable us to count the occurences's number within a string of characters.

int occurence_count(const char *str, const char c) // const char str[] = const char *str.
{
    int occurences = 0;
    
    for(int i =0; i < str_lenght(str); ++i)
        if(str[i] == c)
            occurences++;
    
    return occurences;
}
