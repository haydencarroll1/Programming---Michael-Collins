#include <stdio.h>

int main()
{
    int arrSorted[] = {1, 2, 3, 4, 5};
    int arrUnsorted[] = {2, 4, 1, 5, 3};
    int min = arrUnsorted[0];
    int max = 0;
    int rangeOfArr1 = arrSorted[4] - arrSorted[0];  // O(1)
    int rangeOfArr2;

    for(int i = 0; i < 5; i++)
    {
        if(arrUnsorted[i] < min)
        {
            min = arrUnsorted[i];
        }
        else if(arrUnsorted[i] > max)
        {
            min = arrUnsorted[i];
        }
    }
printf("Enter the length of a square\n");
    rangeOfArr2 = max - min;  // O(n)

    


    return 0;
}