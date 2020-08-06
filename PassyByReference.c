#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{

  int temp;
  temp = *x; // save the value at address x
  *x = *y;  // put y into x
  *y = temp; // put temp into y
  
  return;

}

int main (void)
{
  
  // local variable declaration
  int a = 50;
  int b = 100;
  
  printf("After we swap, value of a : %d\n", a);
  printf("After we swap, value of b : %d\n", b);
  
  // calling a function to swap the values
  swap(&a, &b);
    

  printf("After we swap, value of a : %d\n", a);
  printf("After we swap, value of b : %d\n", b);
    
 
  return 0;


}
