/*
Assignment 1

Author:Hayden Carroll

Date :2/11/22

Program to view and change users atm pin
*/

#include <stdio.h>
#include <stdlib.h>// vscode told to use to use exit function

int main()
{

    int password = 1234; //create a variable to store password, this can be changed
    int user_input, choice = 0, counter = 0, counter2 = 0, new_pin, verify, checker_1 = 0, checker_2 = 0;


    do//program will run until user exits program by inputting 4
    {

		printf("\n\n\n******** Welcome to ATM *************\n");
		printf("1. Input PIN and verify\n");
		printf("2. Change PIN\n");
		printf("3. Check number of times PIN entered correctly and incorrectly\n");
		printf("4. Quit\n\n");
		printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            case 2:
            {
                do
                {
                    printf("Please enter your 4 digit PIN: ");
                    scanf("%d", &user_input);
                    
                    if(user_input == password)
                    {
                        checker_2 = 1; // if password correct can now exit loop.
                    }//end of if
                    else if(user_input < 0 || user_input > 9999)//checks that input is valid
                    {
                        printf("Invalid input, please try again.\n");

                    }//end of else if
                    else if(user_input != password)//checks that input is correct
                    {
                        printf("Incorrect PIN, please try again.\n");
                        counter2++;

                    } // end of else if
                    else
                    {
                        checker_1 = 1;
                        checker_2 = 1; // prevents an infinite loop of user enters a character

                        printf("Error: Misinput, Program will now end.");
                    }

                } while (checker_2 == 0);//only leaves loop once password is correct
                //end of do while 


                if(user_input==password && choice==1)//option 1
                {
                    printf("That is the correct PIN");
                    counter++;
                }


                if (user_input==password && choice==2)//option 2
                {
                    counter++;

                    do
                    {
                        printf("Please enter your new PIN:\n");
                        scanf("%d", &new_pin);

                        if(new_pin < 0 || new_pin > 10000)
                        {
                            printf("invalid PIN, please enter a 4 digit PIN\n");
                        }

                    }while(new_pin < 0 || new_pin > 10000);


                    printf("Please enter your new PIN again:\n");
                    scanf("%d", &verify);


                    if(choice>=1||choice<=3)
                    {
                        
                        password = new_pin;
                        printf("Thank you! You have successfully changed your PIN you will now be returned to the main menu.\n\n");
                    }
                    else
                    {
                        printf("Passwords did not match, your PIN has not changed.\nUou will now be returned to the main menu.\n");
                    }

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
                
                exit(0);
            }// end of case 4

            default:
            {

                printf("\nError: Misinput, Program will now end.");

                exit(1);
            }//end of default


        }//end of switch

    }while (checker_1 == 0);// end of while loop -- will only leave when user chooses option 4 or misinputs (enters a character or number below 1 or above 4).

    return 0;
}