//Write a program in C to display the first 10 natural numbers

#include <stdio.h>

int main()
{
    int i, total = 0;

    for(i = 1; i<11; i++)
    {
        total = total + i;
        printf("%d ", i);
    }

    printf("\ntotal = %d", total);



    return 0;
}