#include <stdio.h>
#include <string.h>

int main(void)
{
       char name[20];
       //20 bits allocated you can allocate as much as you want
       printf("What is your name ? ");
    
       //We will use fgets to store the input as gets is a dangerous function and can overload memory buffers
       fgets(name,20,stdin);
    
       printf("Hello %s",name); //display the name
    
       return 0;
   
}
 
