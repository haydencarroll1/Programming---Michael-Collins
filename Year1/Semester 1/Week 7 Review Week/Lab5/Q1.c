#include <stdio.h>
int main()
{
    int total, n = 0;


    while(n<10)
    {
        n++;
        
        if (n<10)
        {
            printf("%d,", n);
        }   
        else
        {
            printf("%d\n", n);
        }
    }

    return 0;
}