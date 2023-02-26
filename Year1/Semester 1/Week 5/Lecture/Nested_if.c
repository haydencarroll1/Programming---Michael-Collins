/*
Program to demonstrate nested if statements, i.e., if inside if
*/

#include <stdio.h>
int main()
{
    float bank_balance = 0;
        
    printf("Enter a bank balance\n");
    scanf("%f", &bank_balance);

    /*
    //if the bank balance is greater than zero
    if (bank_balance > 0 && bank_balance <= 100)
    {
        printf("\nYour balance is between 1 and 100");
    } // end if
    */

    // This code is the same as the if statement above
    if (bank_balance > 0)
    {
        if (bank_balance <= 100)
        {
            printf("\nYour balance is between 1 and 100");
        } // end inner if
    } // end outer if

return 0;
} // end main()