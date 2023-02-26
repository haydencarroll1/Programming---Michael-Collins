//Write a program in C to display the multiplication table of a given integer
//https://www.w3resource.com/c-programming-exercises/for-loop/index.php

#include <stdio.h>
int main()
{
    int input, output, n;

    printf("please enter an integer: ");
    scanf("%d", &input);

    for(n = 1; n < 11; n++)
        {
            output = input*n;

            printf("\n%d X %d = %d", input, n, output);
        }
    return 0;
}