#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int number = 0;
    
    printf("Enter an integer: ");// Initializing the program 
    
    scanf("%d", &number);// Enter a number you have in mind
    
    printf("The value in octal is %o\n", number); // The %o translates into the octal value of the number entered above
    printf("The value in hexadecimal is %X\n", number);// The %X translates into the hex value of the number entered above
    
    return 0;
}
 
