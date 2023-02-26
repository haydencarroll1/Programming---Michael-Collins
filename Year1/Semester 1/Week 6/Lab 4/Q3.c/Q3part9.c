/*
Title: Question 3 part 9
Author:Hayden Carroll
Date :25/10/22
*/

#include <stdio.h>
int main()
{
    int ireland, washington = 0, moscow = 0, beijing = 0;
    float minute;
    char var1;
    printf("Please enter the time in Ireland in the 24-hour format: ");
    scanf("%d %c %2f",&ireland,&var1,&minute);

    
    if(ireland <= 5)
    {
        washington = ireland + 19;
    }
    else 
    {
        washington = ireland - 5;
    }

    if(ireland >= 22)
    {
        moscow = ireland - 22;
    }
    else 
    {
        moscow = ireland + 2;
    }

    if(ireland >= 17)
    {
        beijing = ireland - 17;
    }
    else 
    {
        beijing = ireland + 7;
    }

    printf("Ireland = %d:%02.0f\n",ireland, minute);
    printf("washington = %d:%02.0f\n",washington, minute);
    printf("moscow = %d:%02.0f\n",moscow, minute);
    printf("beijing = %d:%02.0f\n",beijing, minute);

return 0;
}