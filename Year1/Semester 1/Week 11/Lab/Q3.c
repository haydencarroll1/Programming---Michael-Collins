/*
Write a program that uses a 3x2 array. Your program must do the following:
a) Enter in values for each element in the array.
b) Calculate and display the sum of row 0, row 1, and row 2 separately.
c) Calculate and display the sum of column 0 and column 1 separately.
d) Find the highest number in the array and display it.
*/

#include <stdio.h>

#define ROW 3
#define COLUMN 2

int main()
{
    int arr[ROW][COLUMN];
    int i, j;
    int sumRow = 0;
    int sumColumn = 0;
    int highest = 0;

    printf("Please enter %d numbers:\n", ROW*COLUMN);

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {
            scanf("%d", &arr[i][j]);
            while(getchar() != '\n');

            if (arr[i][j] > highest)
            {
                highest = arr[i][j];
            }
        }
    }

    for(i = 0; i < ROW; i++)
    {
        sumRow = 0;
        for(j = 0; j < COLUMN; j++)
        {
            sumRow = sumRow + arr[i][j];
        }

        printf("\nThe sum of row %d = %d", i, sumRow);
    }   


    for(j = 0; j < COLUMN; j++)
    {
        sumColumn = 0;
        for(i = 0; i < ROW; i++)
        {
            sumColumn = sumColumn + arr[i][j];
        }
        printf("\nThe sum of column %d = %d", j, sumColumn);
    }   

    printf("\n\nThe highest number you entered was: %d\n", highest);


    return 0;
}