#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int*, int);

int main()
{
    int numsSize = 10;

    int nums[11] = {0,0,1,1,1,2,2,3,3,4};

/*
    printf("Please enter %d numbers and i will test if theres a duplicate and remove it.", numsSize);

    for(int i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }
*/
    int k = removeDuplicates(nums, numsSize);

    printf("There were %d duplicates here is the new array:", k);
    
    for(int i = 0; i < numsSize; i++)
    {
        printf("\n%d", nums[i]);
    }


}
int removeDuplicates(int* nums, int numsSize)
{
    int k = 0;

    if (numsSize <= 1)
    {
        return numsSize;
    }

    for(int i = 0; i < numsSize; i++)
    {
        if(*(nums + i) == *(nums + i + 1))
            {
                if(*(nums + k) != *(nums + i + 2))
                {
                    *(nums + k) = *(nums + i + 2);
                    k++;                    
                }
            }
    } 
    return k + 1;

}