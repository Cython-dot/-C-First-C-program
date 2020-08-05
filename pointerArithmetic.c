#include <stdio.h>
#include <stdlib.h> 

/*-----------------------------------------*/

A Function that works out the string length using a pointer arithmetic.
It contains a const char pointer as a parameter.  
It uses incrementation operator towards the end of the string. 

/*-----------------------------------------*/

// Header section for fonction prototyping 
int stringLength(const char *string); 

/*-----------------------------------------*/ 

int stringLength(const char *string)
{
  
  const char *finalAddress = string; 
  
  while(*finalAddress)
    ++finalAddress; 
    
  return finalAddress - string; 

}

int main(int argc, const char * argv[]) 
{

  printf("%d \n", stringLength("stringLength test")); // 17
  printf("%d \n", stringLength("Dorian")); // 6
  printf("%d \n", stringLength("..")); // 2
  
 return 0; 
 
}

  



