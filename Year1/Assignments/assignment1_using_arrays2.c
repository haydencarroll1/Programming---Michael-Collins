/*
Assignment 1

Author:Hayden Carroll

Date :2/11/22

Program to view and change users ATM PIN.
*/

#include <stdio.h>

#define size 4

int main()
{
    int pin[] = {1,2,3,4};
    int pin_verify[size];

    int newPin[size];
    int newPin_verify[size];

    int counter = 0, counter2 = 0, checker_1 = 0, checker_3, checker_4, i;

    float choice;

    char checker_2;

    printf("\n\n\n******** Welcome to ATM *************\n\n"); //ATM Menu 

    printf("1. Input PIN and verify\n");
    printf("2. Change PIN\n");
    printf("3. Check number of times PIN entered correctly and incorrectly\n");
    printf("4. Exit\n");

    printf("\nPlease enter your choice: ");

    do //program will run until user exits program by inputting 4
    {
        while(scanf("%f", &choice)!=1) // checks to see if user enters character
        {
            getchar(); // gets character from input
            printf("\nNo characters or floats allowed!\n\n");

            printf("Please enter your choice (Enter 5 to see menu): ");

        }

        if(choice == 1 || choice == 2)
        {
            printf("\nPlease enter your %d digit PIN:\n", size);

            for(i = 0; i < size; i++)
            {
                while(scanf("%d", &pin_verify[i]) != 1) //checks to see if user enters character
                {
                    getchar();//gets character from input
                    printf("\nNo characters allowed!\n");

                    printf("Please re-enter your %d digit PIN: \n", size);//asks user to re-enter and will go back through loop

                    i=0; //resets for loop so user re enters entire password

                } //end of while

                if(pin_verify[i] < 0 || pin_verify[i] > 9) //checks that input is valid
                {
                    printf("\nInvalid input!\n");

                    printf("Please re-enter your %d digit PIN: \n", size);
                    
                    checker_1 = 0;

                    i = -1;

                } //end of if

            }

            for(i = 0; i < size; i++)
            {
                if(pin[i] != pin_verify[i]) //checks that input is correct
                {
                    printf("\nIncorrect PIN.\nYou will now be returned to the main menu.\n");
                    counter2++;

                    checker_1 = 0;

                    i = size;

                } // end of else if

                else
                {
                    checker_1 = 1;

                }

            } // end of for
        
            if(checker_1 == 1 && choice == 1) // option 1
            {
                printf("\nThat is the correct PIN.\nYou will now be returned to the main menu.\n");
                counter++;

            } // end of if

            if (checker_1 == 1 && choice==2) // option 2
            {
                counter++;

                printf("Please enter your new %d PIN:\n", size);
            
                for(i = 0; i < size; i++)
                {
                    while(scanf("%d", &newPin[i])!=1) // checks to see if user enters character
                    {
                        getchar(); // gets character from input
                        printf("\nNo characters or floats allowed!\n");

                        printf("Please re-enter your %d digit PIN: \n", size);//asks user to re-enter and will go back through loop

                        i=0; //resets array number so user re enters entire password

                    } // end of while

                    if(newPin[i] < 0 || newPin[i] > 9) //checks that input is valid
                    {
                        printf("\nInvalid input!\n");

                        printf("Please re-enter your %d digit PIN: \n", size);

                        i = -1; // as for loop will add 1 this means it will go back to 0.

                        checker_4 = 0;

                    } //end of if

                    else
                    {
                        checker_4 = 1;
                    } // end of else

                } // end of for

                if(checker_4 == 1)
                {
                    printf("Please enter your new PIN again:\n");

                    for ( i = 0; i < size; i++)
                    {
                        while(scanf("%d", &newPin_verify[i] ) !=1 ) //checks to see if user enters character
                        {
                            getchar(); // gets character from input
                            printf("\nNo characters or floats allowed!\n");

                            printf("\nPlease enter your new PIN again:\n"); // asks user to re-enter and will go back through loop

                            i = 0;

                        } // end of while

                    }

                    for ( i = 0; i < size; i++)
                    {
                        if(newPin_verify[i] == newPin[i])
                        {
                            checker_3 = 1;

                        } //end of if

                        else if(newPin_verify[i] != newPin[i])
                        {
                            checker_3 = 0;

                            printf("\n\nPasswords did not match, your PIN has not changed.\nYou will now be returned to the main menu.\n");

                            i = size;

                        } // end of else

                    } // end of for

                    if(checker_3 == 1)
                    {
                        printf("\nThank you! You have successfully changed your PIN.\nYou will now be returned to the main menu.\n\n");

                    }

                } // end of if for new pin verification

            } // end of if choice 2 only

        } // end of if choice 1 and 2


        else if (choice == 3)
        {
            printf("You entered your password correctly %d amount of times.\n",counter);
            printf("You entered your password incorrectly %d amount of times.\n",counter2);

        }// end of if 3

        else if(choice == 4)
        {
            printf("Are you sure you want to exit the program? Enter Y to continue: ");
            scanf("%c", &checker_2);

            while(getchar() != '\n');

            if(checker_2 != 'y' || checker_2 != 'Y')
            {
                printf("\n\nPlease enter your choice (Enter 5 to see menu): ");
            }

        } // end of if 4

        else if(choice == 5)
        {
            printf("\n\n\n******** Welcome to ATM *************\n\n"); //ATM Menu 

            printf("1. Input PIN and verify\n");
            printf("2. Change PIN\n");
            printf("3. Check number of times PIN entered correctly and incorrectly\n");
            printf("4. Exit\n");

            printf("\n\nPlease enter your choice: ");

        } // end of if 5

        else
        {
            printf("\n\nPlease enter a number between 1 and 5.");

            printf("\n\nPlease enter your choice (Enter 5 to see menu): ");

        }

    }while (choice != 4 && (checker_2 != 'y' || checker_2 != 'Y'));// end of while loop -- will only leave when user chooses option 4

    return 0;
}