#include <stdio.h>

#define ROW 4
#define COLUMN 5

int main()
{
    int arr[ROW][COLUMN];
    int i, j;

    printf("Please enter %d numbers:\n", ROW*COLUMN);

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {
            scanf("%d", &arr[i][j]);

        }

    }

    printf("The following values are negative: \n");

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {
            if(arr[i][j] < 0)
            {
                printf("%d Row: %d Column: %d\n", arr[i][j], i+1, j+1);
                
            }

        }

    }

    return 0;
}