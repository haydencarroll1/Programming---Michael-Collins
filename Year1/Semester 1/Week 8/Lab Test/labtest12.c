/*
Title: Lab Test TU857/1

Author: Hayden Carroll

Student Code: C22311651

Date: 7/11/22

Description: This program takes an input from the user between 1 and 10 and then randomly picks a number from 1-10 and compares them. 
It keeps track of how many time the numbers have been the same and how many they have been different.
It also tells the user each time.
The program runs 5 times and sums the total amount of times the numbers were the same and different.
*/

#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h> // used in srand() for seeding purposes
int main()
{
    int num = 0, user_input = 0, counter, same, different;
    
    while (counter<5)//stops loop after 5 times
    {
        counter++;//keeps track of amount of times has gone through loop

        do
        {
            printf("\nPlease enter a number between 1 - 10: ");

            while(scanf("%d", &user_input)!=1)//checks to see if user enters character
            {
                getchar();//gets character from input
                printf("\nNo characters allowed!\n");
                printf("\nPlease enter a number between 1 - 10: ");//asks user to re-enter and will go back through loop

            }

            if(user_input<1||user_input>10)//checks that user input is between 1 and 10
            {
                printf("Invalid input!");
            }

        }while(user_input<1||user_input>10);//only leaves loop when its a valid input
        

        printf("\nGenerating a random number between 1-10: ");
        // seed the random number generator with a range 0 – large number
        srand(time(NULL));

        // num is assigned a random number between 1 – 10
        num = (rand() % 10) + 1;

        // display the random number generated
        printf("%d ", num);


        if(user_input==num)//if the random number and user input are the same
        {
            printf("\n\nSame numbers!\n");
            same++;
        }//end if
        else //if the random number and user input are different
        {
            printf("\n\nDifferent numbers!\n");
            different++;
        }//end else

    }//end while
    
    printf("The numbers were the same %d amount of times\n", same);
    printf("The numbers were the different %d amount of times", different);

    return 0;
} // end main