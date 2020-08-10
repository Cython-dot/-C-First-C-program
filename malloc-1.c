#include <stdio.h>
#include <stdlib.h>



int *pExample = (int*)malloc(100);

                                                 /*
                      
                      
    100 bytes of memory were requested and we assigned the address of this memory block to pExample.
    
    pExample will point to the first int allocation at the beginning of the 100 bytes that were allocated. 
    
    Each int on my computer require 4 bytes. Therefore it can hold 25 int values. 
    
    
                                                */
    
