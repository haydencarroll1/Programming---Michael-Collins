/*
Program that uses Functions
*/

#include <stdio.h>

//#define SIZE 5

// Function signature or Function prototype
void stars(void);


int main()
{
    printf("Before function call\n\n");
    
    // Execute our function stars()
    stars();
    
    printf("\n\nAfter function call");
    
    return 0;
    
} // end main()


// Function stars() used to display a set of asterix
//
void stars(void)
{
   	printf("*****");

} // end stars()