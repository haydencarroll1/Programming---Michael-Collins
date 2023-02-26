/*
Title: Programming Assignment 1

Program Description:
This is a C Program to view and change users ATM PIN.
The PIN is any 4-digit number.
The customer’s default PIN has beeninitially assigned the number 1234.
This is a menu-driven program and will display a simple menu when run.
The menu will display 4 options when run and the user selects their option by inputting that number.

Author: Hayden Carroll

Student Code: C22311651

Date: 2/11/22
*/

#include <stdio.h>

#define size 4

int main()
{
    int pin[size] = {1,2,3,4}; // This the original pin and can be changed
    int pin_verify[size]; // This is the array used to compare users input to the actual pin

    int newPin[size]; // This array is used when a user creates a new pin
    int newPin_verify[size]; // This array is used to have the user input their new pin second time to make sure correct

    int counter_true = 0, counter_false = 0, pin_check_1 = 0, pin_check_2 = 0, pin_check_3 = 0, checker_exit = 0, i;

    float choice_menu; // used float so error message could be displayed when user enters float

    char choice_2 = ' '; // for confirm exit option in choice 4

    do //program will run until user exits program by inputting 4
    {
        printf("\n\n******** Welcome to ATM *************\n\n"); //ATM Menu 

        printf("1. Input PIN and verify\n");
        printf("2. Change PIN\n");
        printf("3. Check number of times the PIN was entered correctly and incorrectly\n");
        printf("4. Exit\n");

        printf("\nPlease enter your choice: ");

        while(scanf("%f", &choice_menu)!=1) // checks to see if user enters character
        {
            getchar(); // gets character from input

            printf("\nNo characters allowed!\n\n"); // error message

            printf("Please enter your choice: "); // prints again as in a loop
        }

        if(choice_menu == 1 ) // choice 1
        {
            printf("\nPlease enter your %d digit PIN:\n", size);

            for(i = 0; i < size; i++) // for loop to ensure user enters a number betwwen 1 and 9
            {
                while(scanf("%d", &pin_verify[i]) != 1) //checks to see if user enters character
                {
                    getchar(); // removes char from variable if user entered a char
                    printf("\nNo characters or floats allowed!\n");

                    printf("Please re-enter your %d digit PIN: \n", size);//asks user to re-enter and will go back through loop

                    i=0; //resets for loop so user re enters entire password

                } //end of while

                if(pin_verify[i] < 0 || pin_verify[i] > 9) //checks that input is valid
                {
                    printf("\nInvalid input!\n");

                    printf("Please re-enter your %d digit PIN: \n", size);
                    
                    pin_check_1 = 0;

                    i = -1; // as for loop will add one this complely resets array

                } // end of if

            } // end of for

            for(i = 0; i < size; i++) // for loop to compare pin with original pin
            {
                if(pin[i] != pin_verify[i]) //checks that input is correct
                {
                    printf("\nIncorrect PIN. \nYou will now be returned to the main menu.\n");
                    counter_false++; // keeps track of incorrect inputs of pin

                    pin_check_1 = 0;

                    i = size;

                } // end of else if

                else
                {
                    pin_check_1 = 1;

                }

            } // end of for
        
            if(pin_check_1 == 1) // only goes in if user enters correct pin
            {
                printf("\nThat is the correct PIN.\nYou will now be returned to the main menu.\n");
                counter_true++; // keeps track of correct inputs of pin

            } // end of if

        } // end of if choice 1

        else if (choice_menu == 2) // option 2
        {
            printf("Please enter your new %d PIN:\n", size);
        
            for(i = 0; i < size; i++) // for loop to ensure user enters a number betwwen 1 and 9
            {
                while(scanf("%d", &newPin[i])!=1) // checks to see if user enters character
                {
                    getchar(); // removes char from variable if user entered a char
                    printf("\nNo characters or floats allowed!\n");

                    printf("Please re-enter your %d digit PIN: \n", size); // asks user to re-enter and will go back through loop

                    i=0; // resets array number so user re enters entire password

                } // end of while

                if(newPin[i] < 0 || newPin[i] > 9) //checks that input is valid
                {
                    printf("\nInvalid input!\n");

                    printf("Please re-enter your %d digit PIN: \n", size);

                    i = -1; // as for loop will add 1 this means it will go back to 0.

                    pin_check_2 = 0;

                } //end of if

                else
                {
                    pin_check_2 = 1;
                } // end of else

            } // end of for

            if(pin_check_2 == 1)
            {
                printf("Please enter your new %d digit PIN again:\n", size);

                for ( i = 0; i < size; i++)
                {
                    while(scanf("%d", &newPin_verify[i] ) != 1 ) //checks to see if user enters character
                    {
                        getchar(); // removes char from variable if user entered a char
                        printf("\nNo characters or floats allowed!\n");

                        printf("\nPlease enter your new %d digit PIN again:\n", size); // asks user to re-enter and will go back through loop

                        i = 0; // resets array number so user re enters entire password

                    } // end of while

                }

                for ( i = 0; i < size; i++) // for loop compares both pins user entered to make sure they are the same
                {
                    if(newPin_verify[i] == newPin[i])
                    {
                        pin_check_3 = 1;

                    } //end of if

                    else if(newPin_verify[i] != newPin[i])
                    {
                        pin_check_3 = 0;

                        printf("\nPasswords did not match, your PIN has not changed.\n\nYou will now be returned to the main menu.\n");

                        i = size; // will leave for loop as for condition has been met

                    } // end of else if

                } // end of for loop

                if(pin_check_3 == 1)
                {
                    for( i = 0; i < size; i++) // puts the user input pin into pin array only if both pins entered were the same
                    {
                        pin[i] = newPin[i];
                    }

                    printf("\nThank you! You have successfully changed your PIN.\n\nYou will now be returned to the main menu.\n");

                }

            } // end of if for new pin verification

        } // end of if choice 2

        else if (choice_menu == 3) // choice 3
        {
            printf("You entered your password correctly %d amount of times.\n", counter_true); // correct amount of times user entered password
            printf("You entered your password incorrectly %d amount of times.\n", counter_false); // incorrect amount of times user enter password

        }// end of if 3

        else if(choice_menu == 4) // choice 4
        {
            printf("Are you sure you want to exit the program? Enter 'Y' to continue, or enter 'N' to get back to the main menu: ");
            scanf(" %c", &choice_2);

            if(choice_2 == 'y' || choice_2 == 'Y')
            {
                checker_exit = 1;

            } // end of if

            else
            {
                checker_exit = 0;

            } // end of else

            
        } // end of if 4

        else if(choice_menu>4||choice_menu<1) // if user enters a number outside menu options will display an error message
        {
            printf("\n\nPlease enter a number between 1 and 4.");

        }

        else // if user enters a float will tell them to only enter whole numbers
        {
            printf("\n\nPlease only enter whole numbers!");
        }

    }while (checker_exit == 0); // end of while loop -- will only leave when user chooses option 4 and confirms by inputting Y/y.

    return 0;
}