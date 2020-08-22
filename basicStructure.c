#include <stdio.h>
#include <stdlib.h>

struct employee { char name[100]; char date[15]; float salary;};

int main(void)
{
    /* Declare & initialise a structure variable */
    struct employee salaryMan = {"Dorian", "22/08/20", 50000.00};
        
        
    printf("\n Name : %s"      ,salaryMan.name);
    printf("\n Start day at work : %s"      ,salaryMan.date);
    printf("\n Salary : %.2f"      ,salaryMan.salary);
    
    printf("\n Enter the salary man's name: ");
    scanf("%s", salaryMan.name);
    
    printf("\n When did he start working at the corporation?  ");
    scanf("%s", salaryMan.date);
    
    printf("\n How much does he earn? ");
    scanf("%f", &salaryMan.salary);
    
    printf("\n Name : %s"      ,salaryMan.name);
    printf("\n Start day at work : %s"      ,salaryMan.date);
    printf("\n Salary : %.2f\n"      ,salaryMan.salary);
    
    
    return 0;
}
