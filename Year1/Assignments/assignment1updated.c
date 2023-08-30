#include <stdio.h> 

#define size 4

float menu();
void verify_pin();
void change_pin(int*);
void number_of_wrong_and_right();

int main()
{
    int pin[size] = {1,2,3,4}; // This the original pin and can be changed
    float menuChoice = menu();

    if(menuChoice == 1)
    {
        verify_pin();
    }
    else if(menuChoice == 2)
    {
        change_pin(pin);
    }
    else if(menuChoice == 3)
    {
        number_of_wrong_and_right();
    }

    return 0;
}

int menu()
{
    float choice_menu;

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

    return choice_menu;
}=