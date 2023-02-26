/*
Title: Question 1
Author:Hayden Carroll
Date :24/10/22
*/


#include <stdio.h>
int main()
{
    char var1;
    printf("enter a letter and I will tell you if its a vowel or not: ");
    scanf("%c", &var1);

    switch(var1)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        {
            printf("%c is a vowel", var1);
            break;
        }//end case

        default:
        {
            printf("%c is not a vowel", var1);
            break;
        }




    }





return 0;
}