#include <stdio.h>
#include <stdlib.h> // Include this header to use malloc()



int main() {
    
    int size;
    char *text = NULL; // Initialise your pointer to zero
    
    
    
    
    printf("Hello,enter the limit of the text : ");
    scanf("%d", &size); // Use '&' cause size is not a pointer
    
    /* malloc returns a void pointer so you have to cast. */
    text = (char *) malloc(size * sizeof(char)); // zise according to the number of char you want to       include)
    
    if(text != NULL) // want to check it's not NULL
    {
        printf("Hello,enter a word here : ");
        scanf(" ");
        gets(text);
    }
    
    free(text); // free our pointers and give it back to the heap
    return 0;
}

