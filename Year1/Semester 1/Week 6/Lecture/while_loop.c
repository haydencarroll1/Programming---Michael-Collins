/*
Title: Question 2
Author:Hayden Carroll
Date :24/10/22
*/

#include <stdio.h>
int main()
{
    float num = 1;
    float total = 0;

    // while the number entered is not equal to zero
    while (num != 0)
    {
        printf("\nEnter a number (enter 0 to end program)\n");
        scanf("%f", &num);
        /* Add the number entered to the current value in total.
        This is the new total
        */
        total = total + num;
    } // end while

    
    printf("\nThe final total is %.1f", total);
    // Display the final total

    return 0;
}
