/*
Title: Question 3 part 3
Author:Hayden Carroll
Date :24/10/22
*/

#include <stdio.h>
int main()
{
    int var1, var2, var3;

    printf("please enter 2 numbers: ");
    scanf("%d %d", &var1, &var2);


    var3 = var1%var2;

    if(var3 == 0)
    {
        printf("These numbers are divisible by each other");
    }     
    else
    {
        printf("These numbers are not divisible by each other");
    }



return 0;
}