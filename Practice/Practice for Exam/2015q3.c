#include <stdio.h>
#include <stdlib.h>

#define EXTRA 10

int main()
{
    int amount;
    int total = 0;
    int i;
    int average;

    printf("How many numbers would you like to enter?\n");
    scanf("%d", &amount);

    printf("\nPlease enter them:\n");

    float* numbers = calloc(sizeof(float), amount);

    for(i = 0; i < amount; i++)
    {
        scanf("%f", (numbers + i));

        total += *(numbers + i);
    }

    average = total / amount;
    printf("The average is: %d\n", average);

    for(i = 0; i < amount; i++)
    {
        printf("%f, ", *(numbers + i));
    }

    numbers = realloc(numbers, sizeof(float)*(amount + EXTRA));

    printf("\nEnter the additional data items\n");

    // Enter data items into the allocated memory block
    for(i = amount; i < amount + EXTRA; i++)
    {
        scanf("%d", & *(numbers + i));
    } // end for

    printf("\nYour memory block contains:\n");

    // Display the data items entered into the re-allocated memory block
    for(i = 0; i < amount + EXTRA; i++)
    {
        printf("%d %p\n", *(numbers + i), (numbers + i) );
    } // end for

    return 0;
}