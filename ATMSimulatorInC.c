
#include <stdio.h>
#include <stdlib.h> 

int ATM_Transaction(void); // Prototype of the function
int anotherTransaction, amountToWithdraw, amountToDeposit, pin; // Global Variable
double balance = 1000.f; // Global variable, initial balance to be set to 1000 for everyone

int main(void) {
  
    printf("---------------Welcome to Dorian's bank------------\n");
    printf("Please enter your PIN code : \n");
    scanf("%d", &pin);
        if(pin != 1234)
        {
            printf("Sorry your pin is wrong, please try again with the card");
        }
        else
        {
            ATM_Transaction(); // function call
        }
           
    
    
    return 0;
}

int ATM_Transaction()
{
    int choice;
    printf("Enter any of the four following options : \n\n");
    printf("1. Balance Enquiry \n");
    printf("2. Cash Withdraw \n");
    printf("3. Deposit Cash \n");
    printf("4. Exit \n");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1: // Balance Enquiry
            printf("Your bank balance is : %.2f", balance);
            printf("\n\nDo you want to perform another transaction?\nPress 1 to proceed and press 2 to exit\n\n");
            scanf("%d", &anotherTransaction);
            if(anotherTransaction == 1)
            {
                ATM_Transaction(); // transaction method call
            }
            break;
            
        case 2: // seocnd option shall be withdraw
            printf("Please enter amount to withdraw : ");
            scanf("%d", &amountToWithdraw);
            if (amountToWithdraw <= balance)
            {
                printf("Please collect your cash\n");
                balance = balance - amountToWithdraw;
                printf("Your available balance is %.2f\n", balance);
                printf("\n\nDo you want to perfom another transaction?\n Press 1 to proceed and 2 to exit\n\n");
                scanf("%d", &anotherTransaction);
                    if(anotherTransaction == 1)
                    {
                        ATM_Transaction(); // transaction method call
                    }
            }
            else
            {
                printf("Sorry in-sufficient funds in your accounts");
                printf("\n\nDo you want to perform another transaction?\n Press 1 to proceed and 2 to exit\n\n");
                scanf("%d", &anotherTransaction);
                if(anotherTransaction == 1)
                {
                    ATM_Transaction();
                }
            }
            break;
            
        case 3: // Deposit
            printf("Please enter amount to deposit: ");
            scanf("%d", &amountToDeposit);
            balance = amountToDeposit + balance;
            printf("Tank you for depositing. Yor new balance is now %.2f", balance);
            printf("\n\nDo you want to proceed with another transaction ?\nPress 1 to proceed and 2 to exit\n\n");
            scanf("%d", &anotherTransaction);
            if(anotherTransaction == 1)
            {
                ATM_Transaction(); // transaction method call
            }
            break;
        default:
            printf("Thanks for using our ATM services, see you soon\n\n");
            
    }
    return 0; // or exit(10);
}
