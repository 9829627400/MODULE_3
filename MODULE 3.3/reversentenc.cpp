#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char string[40]; 
    printf (" \n Enter a string to be reversed: ");  
    scanf ("%s", string);  
      
 
    printf (" \n After the reverse of a string: %s ", strrev(string));  
    return 0;  
}  