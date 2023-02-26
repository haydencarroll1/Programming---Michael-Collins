/*
Title: Question 2
Author:Hayden Carroll
Date :24/10/22
*/

#include <stdio.h>
int main()
{
    int var1, a;
    printf("please enter a number between 1 and 100: ");
    scanf("%d", &var1);

    a = var1%2;//modulus of 2

    if (a == 1)
    {
        printf("Number %d is odd", var1);

    }//end if

    else
    {
        printf("Number %d is even", var1);

    }//end else
        
return 0;
}