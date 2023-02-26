#include <stdio.h>

#define size 5

int main()
{
    int input[size], i, copy[size];
    
    printf("Please enter an integer: ");

    for(i = 0; i<size; i++)

    {   
        scanf("%d", &input[i]);

        copy[i] = input[i];
        
    }

    for(i = 0; i<size; i++)
    {
        printf("%d", copy[i]);
    }


    return 0;
}