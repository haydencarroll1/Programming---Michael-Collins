#include <stdio.h>

int sum(int, int, int);
void average(int);

int main()
{
    int number1, number2, number3;
    int total;
    
    printf("Please enter 3 numbers: ");
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    total = sum(number1, number2, number3);

    average(total);

    return 0;
}


int sum(number1, number2, number3)
{
    int total;

    total = number1 + number2 + number3;

    return total;

}

void average(total)
{
    int average;

    average = total/3;
    printf("The average is %d\n", average);
}