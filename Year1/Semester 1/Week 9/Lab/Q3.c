#include <stdio.h>

#define size 4

int main()
{
    int element[size], temp, i;

    printf("Please enter 4 integers: \n");

    for(i = 0; i < 4; i++)
    {
        scanf("%d", &element[i]);
    }

    for(i = 0; i < 4; i++)
    {
        printf("%d ", element[i]);
    }

    temp = element[0];
    element[0] = element[1];
    element[1] = temp;

    temp = element[3];
    element[3] = element[2];
    element[2] = temp;

    printf("\n");
    
    for(i = 0; i < 4; i++)
    {
        printf("%d ", element[i]);
    }
    
    
    return 0;
}