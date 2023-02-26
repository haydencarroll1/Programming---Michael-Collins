/*
Title: Question 4 part 6
Author:Hayden Carroll
Date :17/10/22
*/

#include<stdio.h>
int main()
{
float c, F;

    printf("please enter a temperature in degrees Fahrenheit: ");
    scanf("%f", &F);

    c = (F-32.0)*(5.0/9.0);
    
    printf("This is %.3f",c );
    printf(" celsius");


return 0;
}