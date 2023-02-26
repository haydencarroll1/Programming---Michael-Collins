#include <stdio.h>

#define size 5

int main()
{
    char name[size];
    
    printf("Please enter a character: \n");

    for(int i = 0; i < size; i++)
    {
        scanf("%c", &name[i]);
        while(getchar() != '\n');
    }

    for(int i = 0; i < size; i++)
    {
        printf("%c ", name[i]);
    }


    return 0;
}