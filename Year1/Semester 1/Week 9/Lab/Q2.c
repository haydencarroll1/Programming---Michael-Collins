#include <stdio.h>

#define SIZE 3

int main()
{

    int input[SIZE], i, celcius[SIZE];

    printf("Please enter 3 temperatures\n");

    for(i = 0; i < 3; i++)
    {
        scanf("%d", &input[i]);

        celcius[i]= (input[i] - 32.0) * (5.0 / 9.0);
    }

    for(i = 0; i < 3; i++)
    {
        printf("Celsius = %d and Fahrenheit = %d\n", celcius[i], input[i]);

    }

return 0;
}