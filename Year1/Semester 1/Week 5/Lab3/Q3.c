/*
Title: Question 3
Author:Hayden Carroll
Date :17/10/22
*/

#include <stdio.h>
int main()
{
    float var1, var2, var3;

    printf("Please enter a float ");
    scanf("%f", &var1);

    printf("Please enter a float ");
    scanf("%f", &var2);

    printf("Please enter a float ");
    scanf("%f", &var3);

    printf("first number to 4 decimal places = %.4f\n",var1);
    printf("first number to 4 decimal places = %.3f\n",var2);
    printf("first number to 4 decimal places = %.f\n",var3);


return 0;
}