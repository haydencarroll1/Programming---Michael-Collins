#include <stdio.h>

#define size 5

int main()
{
    int arr1[size];
    int arr2[size];

    int i;

    printf("Please enter %d numbers:\n", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Please enter %d more numbers:\n", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < size; i++)
    {
        printf("%d * %d = %d\n", arr1[i], arr2[i], (arr1[i]*arr2[i]));
    }

    return 0;
}