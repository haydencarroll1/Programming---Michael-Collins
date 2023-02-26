#include <stdio.h>
int main()
{
    int counter, total, input, n = 0, checker = 1;

    while(checker == 1)
    {
        checker = 0;
        printf("Please enter a positive integer: ");
        scanf("%d", &input);
        if(input<=0)
        {
            printf("Error!\n");
            checker = 1;
        }
        else
        {
            checker = 0;
        }
    }

    counter = input%2;
    total = input;
    
    printf("Initial value is %d", input);

    while (total != 1)
    {
        n++;

        if(counter==0)
        {
            total = total/2;

        }
        else
        {
            total = (total*3) + 1;
        }

        counter = total%2;

        printf("\nnext value is %d",total);
    }

    printf("\nFinal value is %d, \nnumber of steps: %d", total, n);

    return 0;
}