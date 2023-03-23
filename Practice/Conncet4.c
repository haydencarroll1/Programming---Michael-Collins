#include <stdio.h> 

#define ROW 6
#define COLUMN 7

int menu();

int Player1Turn();
int Player2Turn();
int ComputerTurn();

int main()
{
    int connect[ROW][COLUMN];
    int menu_option = 0;

    do
    {
    
    menu_option = menu();

    switch (menu_option)
    {
    case 1:
        break;
    case 2:

    case 3:
        break;
    default:
        printf("Invalid Input, Please try again");
        break;
    }

    }while(menu_option != 3);
    return 0;
}

int menu()
{
    int option = 3;

    printf("Please choose if you want to play 2 player or single player");
    printf("\nEnter 1 for Single  person");
    printf("\nEnter 2 for 2 person");
    printf("\nEnter 3 to exit: ");
    
    scanf("%d", &option);

    return option;
}