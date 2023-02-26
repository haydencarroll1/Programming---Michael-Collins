/*
Program Description:
Write a program that uses a 3x2 (2-D) array. Your program must do the following:
a) Enter values into the array
b) Display the values in the array
c) Find the smallest & largest value and display both to standard output
d) Calculate the average of the values and display to standard output

Author: Hayden Carroll
*/


#include <stdio.h>

#define ROW 3
#define COLUMN 2

int main()
{
    int arr[ROW][COLUMN];
    int i, j;
    int smallest, highest, total;
    float average;
    int n = ROW*COLUMN;

    printf("Please enter %d numbers:\n", ROW*COLUMN);

    for(i = 0; i <ROW; i++)
    {
        for(j = 0; j< COLUMN; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    smallest = arr[0][0];
    highest = arr[0][0];

    for(i = 0; i <ROW; i++)
    {
        for(j = 0; j< COLUMN; j++)
        {
            printf("\nRow %d, column %d contains %d\n", i, j, arr[i][j]);

            total = total +arr[i][j];

            if(smallest > arr[i][j])
            {
                smallest = arr[i][j];
            }

            if (highest < arr[i][j])
            {
                highest = arr[i][j];
            }
            
        }
    }

    printf("\nThe smallest number you entered was %d.\n", smallest);
    printf("\nThe highest number you entered was %d.\n", highest);

    average = (float)total / n;
    printf("\nThe average is %.2f.\n", average);

    return 0;
}