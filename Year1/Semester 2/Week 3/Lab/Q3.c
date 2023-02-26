#include <stdio.h>

#define SIZE 3

int max_array(int[]);

int main()
{
    int user_input[SIZE];
    int max;
    
    printf("Please enter %d numbers and I will find the average: \n", SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &user_input[i]);
    }
    max = max_array(user_input);

    printf("\nThe max is %d", max);
    
    return 0;
}

int max_array(int user_input[])
{
    int max;

    for(int i = 0; i < SIZE; i++)
    {
        if(max < user_input[i])
        {
            max = user_input[i];
        }
    }

    return max;
}
