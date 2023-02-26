#include <stdio.h>
int main()
{

   int n, i, temp, menu;
   long long previous = 1, term, total=0;
    

        do
        {   
            printf("Please enter the number of terms in the series: ");
            
            while(scanf("%d", &n)!=1)
            {
                getchar();
                printf("\n\nNO CHARS\n");

                printf("\nPlease enter the number of terms in the series: ");
            }
        }while (n<0);

        printf("\n");

        for(i = 0; i < n; i++)
        {
            printf("\n%lld", total);

            term = total;

            total = term + previous;

            temp = term;

            previous = temp;

        }
    return 0;
}