#include <stdio.h>

#define size 5

int main()
{
    int element[size], copy[size], i, temp;

    printf("Please enter 5 integers: \n");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &element[i]);
    }

    printf("\n");

    for(i = 0; i < size; i++)
    {
        temp = element[(size-i-1)];

        copy[i] = temp;

        printf("%d ", copy[i]);
    }

    return 0;
}