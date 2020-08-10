#include <stdio.h>
#include <stdlib.h>

int *pExample = (int*)malloc(25*sizeof(int));


                                 /*
                                 

The argument to malloc() is indicating that sufficient bytes for accomodating 25 values of type int should be available.

Notice the cast(int*). It converts the address returned by the funcion of the type pointer int.

malloc returns a pointer of type pointer to void, so you have to cast. 

                                  
                                  */
