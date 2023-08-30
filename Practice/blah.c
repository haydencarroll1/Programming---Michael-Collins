#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int main()
{
    int arr[SIZE] = {1, 0, 0, -4};
    long int product = 1;
    int ans;
    int counter = 0;

    for(int i = 0; i < SIZE; i++)
    {
        printf("%d, ", arr[i]);
    }

    for(int i = 1; i < SIZE; i++)
    {
        if(arr[i] != 0 && counter < 1)
        {
            product *= arr[i];
        }
        else
        {
            counter++;
        }
    }

    printf("\nThe total is: %ld\n\n", product);

    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] != 0)
        {
            printf("%ld, ", (product / arr[i]));
        }
        else
        {
            printf("0, ");
        }
    }

    return 0;
}