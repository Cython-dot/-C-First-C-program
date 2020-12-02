/* Tis program has the caracterisitc of a calculator. However it does not take a number below -1000 nor superior to 1000. */


// The header file includes the list of of all prototypes we wil be using in our program 

#ifndef machine_h
#define machine_h
#include <stdio.h>
#include <stdlib.h>



/* Prototypes */
void menu(void);
void application(void);
void calculate(int choice);
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);


#endif /* machine_h */


// machine.c -> In this file, each fonction is detailed, ready to be used in the main.c

#define machine_h
#include <stdio.h>
#include <stdlib.h>



void menu(void)
{
    printf("1.Addition\n2.Sbutraction\n3.Multiplication\n4.Division\n5.Leave the program\n");
    printf("/*---------------------------------------------------------*/\n");
    
}

void calculate(int choice)
{
    int number1 = 0; int number2 =0;
    int result = 0;
    
    do
    {
        printf("Enter your first number : ");
        scanf("%d", &number1);
        
        printf("Enter your second number : ");
        scanf("%d", &number2);
        
        
        if(number1 < -1000 || number1 > 1000 || number2 < -1000 || number2 > 1000)
           printf("Wrong input, please enter a number between -1000 and 1000");
        else
        {
            if(choice == 1) result = addition(number1, number2);
            else if(choice == 2) result = subtraction(number1, number2);
            else if(choice == 3) result = multiplication(number1, number2);
            else if(choice == 4) result = division(number1, number2);
            
            printf("The result is %d\n", result);
        }
    }
    while(number1 < -1000 || number1 > 1000 || number2 < -1000 || number2 > 1000);
}
 

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    if(b == 0)
    {
        printf("The division by 0 equal 0, so please enter another number\n");
        return(-1);
    }
    
    return a / b;
   
}

void application(void)
{
    int choice =0;
    
    do
    {
        menu();
        printf("> ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                calculate(choice);
                break;
                
            case 2:
                calculate(choice);
                break;
                
            case 3:
                calculate(choice);
                break;
                
            case 4:
                calculate(choice);
                break;
                
            case 5:
                break;
                
            default:
                printf("choice is uncorrect !\n");
        }
    }
    while(choice != 5);
    
}

// main.c is the file where the program is executed

#define machine_h
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    
    application();
   
    return 0;
}
 
