/*
Assignment 1

Author:Hayden Carroll

Date :2/11/22

Program to view and change users ATM PIN.
*/

#include <stdio.h>

int main()
{

    int password = 1234; // create a variable to store password, this can be changed
    float userInput, newPin, verify, choice;
    int counter = 0, counter2 = 0, checker_1 = 0, var1;

    do // program will run until user exits program by inputting 4
    {

        printf("\n\n\n******** Welcome to ATM *************\n\n");

        printf("1. Input PIN and verify\n");
        printf("2. Change PIN\n");
        printf("3. Check number of times PIN entered correctly and incorrectly\n");
        printf("4. Exit\n\n");

        printf("Enter your choice:");

        while(scanf("%f", &choice)!=1) // checks to see if user enters character
        {
            getchar(); // gets character from input
            printf("\nNo characters or floats allowed!\n\n");
        }
    
        if(choice == 1 || choice == 2)
        {
            do
            {
                printf("\nPlease enter your 4 digit PIN: ");

                while(scanf("%04f", &userInput)!=1) // checks to see if user enters character
                {
                    getchar(); // gets character from input
                    printf("\nNo characters or floats allowed!\n");

                    printf("\nPlease enter your 4 digit PIN: "); //asks user to re-enter and will go back through loop
                } // end of while

                if(userInput < 0 || userInput > 10000) //checks that input is valid
                {
                    printf("Invalid input, please try again.\n");
                } //end of if

                else if(userInput != password) //checks that input is correct
                {
                    printf("Incorrect PIN, please try again.\n");
                    counter2++;
                } // end of else if

            } while (userInput!=password); // only leaves loop once password is correct
            // end of do while

                if(userInput==password && choice==1) // option 1
                {
                    printf("\nThat is the correct PIN");
                    counter++;
                } // end of if

            if (userInput==password && choice==2) // option 2
            {
                counter++;

                do
                {
                    printf("Please enter your new PIN: ");
                
                    while(scanf("%f", &newPin)!=1) // checks to see if user enters character
                    {
                        getchar(); // gets character from input
                        printf("\nNo characters or floats allowed!\n");

                        printf("\nPlease enter your new PIN: "); // asks user to re-enter and will go back through loop
                    } // end of while

                    if(newPin < 0 || newPin > 10000)
                    {
                        printf("invalid PIN, please enter a 4 digit PIN\n");
                    }

                }while(newPin < 0 || newPin > 10000); // end of do while

                printf("Please enter your new PIN again:");

                do
                {
                    while(scanf( "%f", &verify ) !=1 ) //checks to see if user enters character
                    {
                        getchar(); // gets character from input
                        printf("\nNo characters or floats allowed!\n");

                        printf("\nPlease enter your new PIN again: "); // asks user to re-enter and will go back through loop
                    } // end of while


                    if(newPin == verify)
                    {
                        password = newPin;
                        printf("\nThank you! You have successfully changed your PIN you will now be returned to the main menu.\n\n");
                    } //e nd of if
                    else
                    {
                        printf("Passwords did not match, your PIN has not changed.\n\nPlease try again and enter the password you entered: ");
                    }
                }while(newPin != verify); // end of do while

            } // end of if
        } //end of if 1 and 2
        
        else if (choice == 3)
        {
            printf("You entered your password correctly %d amount of times.\n",counter);
            printf("You entered your password incorrectly %d amount of times.\n",counter2);

        }// end of if 3

        else if(choice == 4)
        {
            printf ("\nExiting the program...\n");

        }// end of if 4
        
        else if(choice<1||choice>4)
        {
            printf("\n\nPlease enter a number between 1 and 4.");
        }

        else
        {
            printf("\n\nNo characters or floats allowed!");
        }

    }while (choice != 4);// end of while loop -- will only leave when user chooses option 4

    printf("\nSuccesfully Exit. \nHave a great day and thank you for using our service!!\n\n ");

    return 0;
} // end of main()