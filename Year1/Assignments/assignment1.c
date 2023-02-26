/*

Title: Programming Assignment 1 TU857/1

Program Description:

This is a C Program to view and change users ATM PIN. The PIN is any 4-digit number. It is stored using an array.
The customer’s default PIN has been initially assigned the number 1234. This is a menu-driven program and will display a simple 
menu when run. The menu will display 4 options when run and the user selects their option by inputting that number. The user 
can input and verify their pin by inputting 1. They can change their pin by inputting 2. They can view how many times they 
inputted their PIN correct and incorrect by inputting 3. They can end the program smoothly by inputting 4 and confirming by inputting y/Y.

Author: Hayden Carroll C22311651

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

    int counter_true = 0;
    int counter_false = 0; 
    int pin_check_1 = 0; 
    int pin_check_2 = 0; 
    int pin_check_3 = 0; 
    int checker_exit = 0; 
     
    int i;

    float choice_menu; // used float so error message could be displayed when user enters float

    char choice_2 = ' '; // for confirm exit option in choice 4


    // this loop is designed to ensure the program will run until user exits program by inputting 4
    do 
    {
        // ATM Menu
        printf("\n\n******** Welcome to ATM *************\n\n"); 
        printf("1. Input PIN and verify\n");
        printf("2. Change PIN\n");
        printf("3. Check number of times the PIN was entered correctly and incorrectly\n");
        printf("4. Exit\n");
        printf("\nPlease enter your choice: ");
        scanf("%f", &choice_menu);

        // this while loop keeps getting inputs from the user until its not a character
        while(getchar() != '\n')
        {
            printf("\nNo characters allowed!\n\n"); // error message

            printf("Please enter your choice: "); // prints again as in a loop
            scanf("%f", &choice_menu);

        }

        // this if statement is the start of the choices
        if(choice_menu == 1 )
        {
            printf("\nPlease enter your %d digit PIN:\n", size);

            // this for loop gets the first array value and makes sure its not a character or a number not betwwen 1 and 9 and keeps going through all array values until it hits the size value
            for(i = 0; i < size; i++)
            {
                scanf("%d", &pin_verify[i]);

                // this while loop keeps getting inputs from the user until its not a character
                while(getchar() != '\n')
                {
                    printf("\nNo characters or floats allowed!\n");

                    printf("\nPlease re-enter your %d digit PIN: \n", size); // asks user to re-enter and will go back through loop
                    
                    i=0; // resets for loop so user re enters entire password

                    scanf("%d", &pin_verify[i]);

                } // end while
                
                // checks that input is valid
                if(pin_verify[i] < 0 || pin_verify[i] > 9) 
                {
                    printf("\nInvalid input!\n");

                    printf("\nPlease re-enter your %d digit PIN: \n", size);
                    
                    pin_check_1 = 0;

                    i = -1; // as for loop will add 1, this complely resets i value to 0

                } // end if

            } // end for

            // for loop to compare pin with original pin
            for(i = 0; i < size; i++)
            {
                //checks that input is correct
                if(pin[i] != pin_verify[i]) 
                {
                    printf("\nIncorrect PIN. \nYou will now be returned to the main menu.\n");
                    counter_false++; // keeps track of incorrect inputs of pin

                    pin_check_1 = 0;

                    i = size; // will leave for loop as for condition has been met

                } // end else if

                else
                {
                    pin_check_1 = 1;

                }

            } // end for
            
            // only goes in if user enters correct pin
            if(pin_check_1 == 1)
            {
                printf("\nThat is the correct PIN.\nYou will now be returned to the main menu.\n");
                counter_true++; // keeps track of correct inputs of pin

            } // end if

        } // end if choice 1

        // this else if statement is for option 2
        else if (choice_menu == 2)
        {
            printf("\nPlease enter your new %d digit PIN:\n", size);
        
            // this for loop is designed to ensure user enters a number betwwen 1 and 9 and doesnt enter a character
            for(i = 0; i < size; i++) 
            {
                scanf("%d", &newPin[i]);

                // this while loop keeps getting inputs from the user until its not a character
                while(getchar() != '\n')
                {
                    printf("\nNo characters or floats allowed!\n");

                    printf("\nPlease re-enter your new %d digit PIN: \n", size); // asks user to re-enter and will go back through loop
                    scanf("%d", &newPin[i]);

                    i=0; // resets array number so user re enters entire password

                } // end while

                // checks that input is valid
                if(newPin[i] < 0 || newPin[i] > 9) 
                {
                    printf("\nInvalid input!\n");

                    printf("\nPlease re-enter your new %d digit PIN: \n", size);

                    i = -1; // as for loop will add 1, this complely resets i value to 0

                    pin_check_2 = 0; // will change to 0 if user enters a number above 9 or below 1

                } // end if

                else
                {
                    pin_check_2 = 1; // only equals 1 if input is valid will change to 0 if user enters a valid number 

                } // end else

            } // end for

            if(pin_check_2 == 1)
            {
                printf("\nPlease enter your new %d digit PIN again:\n", size);

                for ( i = 0; i < size; i++)
                {
                    scanf("%d", &newPin_verify[i]);

                    // this while loop keeps getting inputs from the user until its not a character
                    while(getchar() != '\n')
                    {
                        getchar(); // removes char from variable if user entered a char
                        
                        printf("\nNo characters or floats allowed!\n");

                        printf("\nPlease enter your new %d digit PIN again:\n", size); // asks user to re-enter and will go back through loop
                        scanf("%d", &newPin_verify[i]);

                        i = 0; // resets array number so user re enters entire password

                    } // end while

                // checks that input is valid
                    if(newPin_verify[i] < 0 || newPin_verify[i] > 9) 
                    {
                        printf("\nInvalid input!\n");

                        printf("\nPlease re-enter your new %d digit PIN: \n", size);

                        i = -1; // as for loop will add 1, this complely resets i value to 0

                        pin_check_2 = 0; // will change to 0 if user enters a number above 9 or below 1

                    } // end if

                }

                // this for loop is designed to compare both of the pins the user entered to make sure they are the same
                for ( i = 0; i < size; i++) 
                {
                    if(newPin_verify[i] == newPin[i])
                    {
                        pin_check_3 = 1;

                    } //end of if

                    else if(newPin_verify[i] != newPin[i])
                    {
                        pin_check_3 = 0;

                        printf("\nPasswords did not match, your PIN has not changed.\n\nYou will now be returned to the main menu.\n");

                        i = size; // this is to make sure the program leaves the loop as the user has not entered the same password

                    } // end else if

                } // end for

                if(pin_check_3 == 1)
                {
                    for( i = 0; i < size; i++) // puts the user input pin into pin array only if both pins entered were the same
                    {
                        pin[i] = newPin[i];
                    }

                    printf("\nThank you! You have successfully changed your PIN.\n\nYou will now be returned to the main menu.\n");

                } // end if

            } // end if for new pin verification

        } // end if choice 2

        // this else if statement is for option 3
        else if (choice_menu == 3) 
        {
            printf("You entered your password correctly %d amount of times.\n", counter_true); // correct amount of times user entered password
            printf("You entered your password incorrectly %d amount of times.\n", counter_false); // incorrect amount of times user enter password

        }// end of if 3

        // this else if statement is for option 4
        else if(choice_menu == 4)
        {
            printf("\nAre you sure you want to exit the program? Enter 'Y' to continue, or enter 'N' to get back to the main menu: ");
            scanf(" %c", &choice_2);

            if(choice_2 == 'y' || choice_2 == 'Y')
            {
                checker_exit = 1;

            } // end if

            else
            {
                checker_exit = 0; 

            } // end else

            
        } // end if 4

        //this else if is designed display an error message if the user enters a number outside the menu options 
        else if(choice_menu>4||choice_menu<1)
        {
            printf("\n\nPlease enter a number between 1 and 4.");

        }

        // if user enters a float will tell them to only enter whole numbers
        else 
        {
            printf("\n\nPlease only enter whole numbers!");
        }

    }while (checker_exit == 0); // end of while loop -- will only leave when user chooses option 4 and confirms by inputting Y/y.

    return 0;

}// end of main