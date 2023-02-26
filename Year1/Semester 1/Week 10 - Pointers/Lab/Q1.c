#include <stdio.h>

#define size 10

int main()
{
    int arr[size];
    int i;

    for (i = 0; i < size; i++)
    {
    arr[i] = 9 - i;
    }
    // Display the contents of arr[8]
    printf("%d\n", arr[8]);
    
    for (i = 0; i < size; i++)
    {
    arr[i] = arr[ arr[i] ];
    }
    // Display the contents of arr[8]

    printf("%d\n", arr[8]);


    return 0;
}