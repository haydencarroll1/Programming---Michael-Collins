#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

int main()
{
    char *names[SIZE] = {"Hayden", "Sam", "James", "Peter", "Michael", "Eoin", "Jamie", "Oisin", "Oscar", "Adam"};
    char user_input[SIZE];
    int result = 0;
    int length;

    printf("Please enter your name and I will check to see if it's in our database:");
    scanf("%s", user_input);

    length = strlen(user_input);

    for(int i = 0; i < SIZE; i++)
    {
        result = strcmp(user_input, names[i]);

        if(result != 0 && i == (SIZE - 1))
        {
            printf("Name not found");
            break;
        }
        else if(result == 0)
        {
            printf("Welome back %s!\n", names[i]);
            break;
        }
    }


    return 0;
}