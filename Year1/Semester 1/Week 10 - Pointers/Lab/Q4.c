/**/

#include <stdio.h>

#define size 15

int main()
{
    int user_input[size];
    int i;

    printf("Please enter %d numbers:\n", size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &user_input[i]);

        while(getchar() != '\n')
        {
            printf("\nNo characters or floats allowed!\n");

            printf("Please enter all %d numbers again: \n", size);

            i = 0;
            
            scanf("%d", &user_input[i]);
        }


    }

    printf("\n\nPART A\n");

    for(i = 0; i < size; i++)
    {
        printf("%d\n", user_input[i]);
    }
    
    printf("\nPART B\n");

    for(i = 0; i < size; i++)
    {
        printf("%d ", user_input[i]);
    }

    printf("\n\nPART C\n");

    for(i = size; i > 0; i--)
    {
        printf("%d ", user_input[i - 1]);
    }

    return 0;
}