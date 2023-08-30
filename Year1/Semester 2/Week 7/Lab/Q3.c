/*
String functions

Compare two NULL terminated strings - strcmp()
*/

#include <stdio.h>
#include <string.h>

#define SIZE 21

void concatenate(char);

int main()
{
    char str1[SIZE];
    char str2[SIZE];
    int result = 0;
    
    
    printf("Enter first string\n");
    fgets(str1, SIZE, stdin);

    
    printf("Enter second string\n");
    fgets(str2, SIZE, stdin);
    
    
    // Compare both strings and check if they are the same
    result = strcmp(str1, str2);

      
    //Check if the strings are the same
    if(result == 0)
    {
       printf("\nStrings are the same");
    } // end if
    else
    {
       printf("\nDifferent strings");
    } // end else

    concatenate(str1)

    return 0;
    
} // end main()

void concatenate(user_input)
{
    char first_sentence[SIZE] = {"First word entered is"}.,m jr 
    strcat(first_sentence, user_input);
}