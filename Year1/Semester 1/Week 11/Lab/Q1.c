/*Show how to initialise two 3x4 arrays (2-Dimensional arrays with 3 rows and 4
columns in each) when they are declared. In your program, declare a 3 rd 3x4 array.
Multiply each corresponding element in the 1 st and 2 nd array and store this product in
the corresponding element of the 3 rd array. For example, array3[0][0] = array1[0][0] x
array2[0][0], array3[0][1] = array1[0][1] x array2[0][1], etc...*/

#include <stdio.h>

#define ROW 3
#define COLUMN 4

int main()
{
    int arr1[ROW][COLUMN] =
                { 
                    {3, 2, 5, 7 },
                    {1, 4, 4, 8 },
                    {9, 1, 0, 2 },
                };

    int arr2[ROW][COLUMN] =  
                {
                    {0, 2, 6, 3 },
                    {9, 1, 0, 2 },
                    {1, 4, 4, 8 },
                };

    int arr3[ROW][COLUMN];

    int i, j;

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {
            arr3[i][j] = arr1[i][j]*arr2[i][j];

            printf("%d, ", arr3[i][j]);

            if (j == COLUMN - 1)
            {
                printf("\n");
            }

        }
    }

    return 0;
}