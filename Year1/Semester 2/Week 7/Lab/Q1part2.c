#include <stdio.h>
#include <string.h>

#define SIZE 10
#define SIZE_OF_ARRAY 20

int main()
{
    char user_input[SIZE_OF_ARRAY];
    
    printf("Please enter a country and the program will display the capital city of that country:");
    scanf("%s", user_input);

    char* countries[SIZE] = {"Australia", "Belgium", "China", "Denmark", "England", "France", "Greece", "Ireland", "Scotland", "Wales"};
    char* capitals[SIZE] = {"Canberra", "Brussels", "Beijing", "Copenhagen", "London", "Paris", "Athens", "Dublin", "Edinburgh", "Cardiff"};

    for(int i = 0; i < SIZE; i++)
    {
        if(strcmp(countries[i], user_input) == 0)
        {    
            printf("The capital of this country is: %s", capitals[i]);
        }
    }




    return 0;
}