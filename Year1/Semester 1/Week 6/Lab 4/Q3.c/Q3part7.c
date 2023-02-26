/*
Title: Question 3 part 7
didnt do 6 as its very similar to this
Author:Hayden Carroll
Date :24/10/22
*/

#include <stdio.h>
    int main()
    {
        int var1 = 0;

    while (var1 < 1 || var1 >7)//if not between 1 and 7 will repeat
    {
        printf("please enter a number from 1-7: ");
        scanf("%d", &var1);
        if(var1 < 1 || var1 >7)
        {
            printf("Error\n");//error message
        }
    }
    
    switch(var1)//use switch
    {
        case 1:
        {
            printf("It's Sunday");
            break;
        }

        case 2:
        {
            printf("It's Monday");
            break;
        }

        case 3:
        {
            printf("It's Tuesday");
            break;
        }

        case 4:
        {
            printf("It's Wednesday");
            break;
        }

        case 5:
        {
            printf("It's Thursday ");
            break;
        }

        case 6:
        {
            printf("It's Friday");
            break;
        }

        case 7:
        {
            printf("It's Saturday");
            break;
        }
    }//end switch

return 0;
}