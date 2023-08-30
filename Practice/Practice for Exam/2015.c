#include <stdio.h>

#define classSize 10

int main()
{
    int DIT_students[classSize];
    int i;
    int total = 0;
    int max = 0, min = 0;

    printf("Please enter the ages of the %d Students:\n", classSize);

    for(int i = 0; i < classSize; i++)
    {
        scanf("%d", &*(DIT_students + i));

        total += *(DIT_students + i);
        
        if(*(DIT_students + i) > max)
        {
            max = *(DIT_students + i);
        }
        
        if(*(DIT_students + i) < min || i == 0)
        {
            min = *(DIT_students + i);
        }
    }

    printf("\nThe average age is: %d\n", total/classSize);

    printf("The oldest age is: %d\n", max);

    printf("The youngest age is: %d\n", min);

    for(i = 0; i < classSize; i++)
    {
        printf("%d\n", *(DIT_students + i));
    }

    return 0;
}