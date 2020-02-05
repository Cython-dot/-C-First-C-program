//
//  main.c
//  First C program: Switch case
//
//  Created on 29/01/2020.
//
//

#include <stdio.h>

int main(void)
{
    int age = 111;
    
    switch(age)
    {
        case 0:
            printf("Tu as 0 an.\n");
            break;
        
        case 15:
            printf("Tu as 15 ans.\n");
            
        default:
            printf("Tu n'as ni 0 an, ni 15 ans.\n");
    }
   
      return 0;
}


