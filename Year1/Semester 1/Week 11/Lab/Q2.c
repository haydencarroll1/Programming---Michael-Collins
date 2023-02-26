/*
Complete the following program so that it computes the sum of all the elements in the
array:
*/
#include <stdio.h>

#define ROW 4
#define COLUMN 6

int main()
{
    int data[ROW][COLUMN] = 
                { 
                    {3, 2, 5, 7, 4, 2},
                    {1, 4, 4, 8, 13, 1},
                    {9, 1, 0, 2, 10, 17},
                    {0, 2, 6, 3, -1, -8}
                };

    // declare the sum
    int i, j;
    int sum;

    // compute the sum
    for ( i=0; i < ROW; i++)
    {
        for ( j=0; j < COLUMN; j++)
        {
            sum = sum + data[i][j];
        }
    }
    // display the sum
    printf("The sum is: %d", sum);



    return 0;
}