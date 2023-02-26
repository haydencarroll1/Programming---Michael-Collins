/*
Assignment 1

Author:Hayden Carroll

Date :2/11/22

Program to view and change users ATM PIN.
*/

#include <stdio.h>
#include <stdlib.h>// vscode told to use to use exit function

int main()
{

    int password = 1234; //create a variable to store password, this can be changed
    float choice;
    int user_input, counter = 0, counter2 = 0, new_pin, verify, checker_1 = 0;
    do//program will run until user exits program by inputting 4
    {

            printf("\n\n\n******** Welcome to ATM *************\n");
            printf("1. Input PIN and verify\n");
            printf("2. Change PIN\n");
            printf("3. Check number of times PIN entered correctly and incorrectly\n");
            printf("4. Quit\n\n");
            printf("Enter your choice:");

            while(scanf("%f", &choice)!=1)//checks to see if user enters character
            {
                getchar();//gets character from input
                printf("\nNo characters or floats allowed!\n\n");
                
                printf("\n******** Welcome to ATM *************\n");
                printf("1. Input PIN and verify\n");
                printf("2. Change PIN\n");
                printf("3. Check number of times PIN entered correctly and incorrectly\n");
                printf("4. Quit\n\n");
                printf("Enter your choice:");
                choice = 0;
            }

        switch(choice)
        {
            case 1:
            case 2:
            {
                do
                {
                    printf("Please enter your 4 digit PIN: ");

                    while(scanf("%d", &user_input)!=1)//checks to see if user enters character
                    {
                        getchar();//gets character from input
                        printf("\nNo characters or floats allowed!\n");

                        printf("\nPlease enter your 4 digit PIN: ");//asks user to re-enter and will go back through loop
                    }//end of while

                    if(user_input < 0 || user_input > 10000)//checks that input is valid
                    {
                        printf("Invalid input, please try again.\n");
                    }//end of if

                    else if(user_input != password)//checks that input is correct
                    {
                        printf("Incorrect PIN, please try again.\n");
                        counter2++;
                    } // end of else if

                } while (user_input!=password);//only leaves loop once password is correct
                //end of do while



                if(user_input==password && choice==1)//option 1
                {
                    printf("That is the correct PIN");
                    counter++;
                }//end of if


                if (user_input==password && choice==2)//option 2
                {
                    counter++;

                    do
                    {
                        printf("Please enter your new PIN: ");
                    
                        while(scanf("%d", &new_pin)!=1) //checks to see if user enters character
                        {
                            getchar(); //gets character from input
                            printf("\nNo characters or floats allowed!\n");

                            printf("\nPlease enter your new PIN: "); //asks user to re-enter and will go back through loop
                        }//end of while

                        if(new_pin < 0 || new_pin > 10000)
                        {
                            printf("invalid PIN, please enter a 4 digit PIN\n");
                        }

                    }while(new_pin < 0 || new_pin > 10000); //end of do while


                    printf("Please enter your new PIN again:\n");
                    while(scanf( "%d", &verify ) !=1 ) //checks to see if user enters character
                        {
                            getchar(); //gets character from input
                            printf("\nNo characters or floats allowed!\n");

                            printf("\nPlease enter your new PIN again: ");//asks user to re-enter and will go back through loop
                        }//end of while


                    if(choice>=1||choice<=3)
                    {
                        
                        password = new_pin;
                        printf("Thank you! You have successfully changed your PIN you will now be returned to the main menu.\n\n");
                    }//end of if
                    else
                    {
                        printf("Passwords did not match, your PIN has not changed.\nUou will now be returned to the main menu.\n");
                    }//end of else

                }// end of if

                break;
            }// end of case 1 and 2

            case 3:

            {
                printf("You entered your password correctly %d amount of times.\n",counter);
                printf("You entered your password incorrectly %d amount of times.\n",counter2);

                break;
            }// end of case 3

            case 4:
            {
                printf ("Exiting the program...\n");

                break;
            }// end of case 4

            default:
            {
                printf("\n\nPlease enter a number between 1 and 4!");
                choice = 0;
                break;
            }

        }//end of switch 

    }while (choice != 4);// end of while loop -- will only leave when user chooses option 4 or misinputs (enters a character or number below 1 or above 4).

    return 0;
}