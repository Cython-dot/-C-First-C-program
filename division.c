#include <stdio.h>
#include <stdlib.h>

                                        /*
                                        
The function division() enables the user to perform a division between two integers.

A division by 0 will result into a o. We want to push the user into avoiding the use of o when choosing numbers. 

                                        */

int division(int x, int y)
{
    if(y == 0)
    {
        printf("You cannot divide by 0\n");
        exit(-1);
    }
    
    return x / y;
}
