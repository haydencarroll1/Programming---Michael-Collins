#include <stdio.h>

#define SIZE 3

int average_array(int[]);

int main()
{
    int user_input[SIZE];
    int i;
    int average;

    printf("Please enter %d numbers and I will find the average: ", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &user_input[i]);
    }

    average = average_array(user_input);

    printf("The average is: %d", average);


    return 0;
}

int average_array(int user_input[])
{
    int sum = 0, average;

    for(int i = 0; i < SIZE; i++)
    {
        sum = sum + user_input[i];
    }

    average = sum / SIZE;

    return average;
}
