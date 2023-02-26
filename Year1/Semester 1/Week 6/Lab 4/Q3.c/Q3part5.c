/*
Title: Question 3 part 5
Author:Hayden Carroll
Date :24/10/22
*/

#include <stdio.h>
int main()
{
    int var1, var2, var3, side1, side2, side3;

    printf("please enter 3 numbers: ");
    scanf("%d %d %d", &var1, &var2, &var3);

    side1 = var1 + var2;
    side2 = var2 + var3;
    side3 = var1 + var3;

    if (side1>var3 && side1>var3 && side1>var3)
    {
        printf("This is a triangle");
    }
    else
    {
        printf("this is not a triangle");
    }


return 0;
}
