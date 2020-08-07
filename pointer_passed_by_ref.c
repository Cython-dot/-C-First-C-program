#include <stdio.h>
#include <stdlib.h>

void square(int *x);


int main(void)
{
    int num = 12;
    
    square(&num);
    printf("The square of the number is %d\n", num);
    // The square of the number is 144
  
    return 0;
}

void square(int *x)
{
    *x = (*x) * (*x);
}
